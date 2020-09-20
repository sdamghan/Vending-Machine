----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:14:27 11/28/2015 
-- Design Name: 
-- Module Name:    VM - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity VM is
	PORT(Type1, Type2, Type3, Type4, Money, Start, CLK, RST : IN std_logic;
		  Data_In: IN std_logic; Done, OutOfService, P1, P2, P3, P4: OUT std_logic;
		  Busy :OUT std_logic;
		  Empty : OUT std_logic_vector(3 DOWNTO 0);
		  TT: OUT std_logic_vector(2 DOWNTO 0)
		  ;FF: OUT std_logic_vector(3 DOWNTO 0)
		  );
end VM;

architecture Behavioral of VM is
	COMPONENT n1 PORT ( Start, Clock: IN std_logic; Data_In: IN std_logic;
	RST : IN std_logic; flag: IN std_logic_vector(3 DOWNTO 0);
	Type1Store, Type2Store, Type3Store, Type4Store: BUFFER Integer; Available : OUT std_logic
	);
	END COMPONENT;
	FOR ALL : n1 USE ENTITY WORK.CommunicationProtocol(behavioral);
	Signal t1,t2,t3,t4: integer;
	Signal Available : std_logic;
	Signal state : std_logic_vector (2 DOWNTO 0) := "000";
	Signal nstate: std_logic_vector (2 DOWNTO 0) := "000";
	Signal Flag: std_logic_vector ( 3 DOWNTO 0);
	begin
	g1 : n1 PORT MAP( Start, CLK, Data_In, RST, Flag,t1,t2,t3,t4,Available );
	PROCESS(t1,t2,t3,t4)
	BEGIN
		IF(t1 = 0)THEN
			Empty(0) <= '1';
		ELSE 
			Empty(0) <= '0';
		END IF;
		IF(t2 = 0)THEN
			Empty(1) <= '1';
		ELSE 
			Empty(1) <= '0';
		END IF;
		IF(t3 = 0)THEN
			Empty(2) <= '1';
		ELSE 
			Empty(2) <= '0';
		END IF;
		IF(t4 = 0)THEN
			Empty(3) <= '1';
		ELSE 
			Empty(3) <= '0';
		END IF;
	END PROCESS;
	
	PROCESS(CLK)
	BEGIN
		FF <= Flag;
		TT <= std_logic_vector(to_unsigned(t1,3));
		IF(CLK = '1' AND CLK'event) THEN
			state <= nstate;
		END IF;
	END PROCESS;
	PROCESS
	BEGIN
		IF( state = "000") THEN
			IF( Available = '0')THEN
				nstate <= "001";
				OutOfService <= '0';
			ELSE
				OutOfService <= '1';
			END IF;
		ELSIF( state = "001") THEN
			--IF( Busy /= '1') THEN
				IF( Money = '1') THEN
					Busy <= '1';
					IF(Type1 = '1') THEN
						IF(t1 /= 0) THEN
							P1 <= '1';
							Done <= '1';
							Busy <= '1';
							nstate <= "010";
							Flag(0) <= '1';
							--t1 <= t1 - 1;
						END IF;
					ELSIF (Type2 = '1') THEN
						IF(t2 /= 0) THEN
							P2 <= '1';
							Done <= '1';
							Busy <= '1';
							nstate <= "010";
							Flag(1) <= '1';
							--t2 <= t2 - 1;
						END IF;
					ELSIF (Type3 = '1') THEN
						IF(t3 /= 0) THEN
							P3 <= '1';
							Done <= '1';
							Busy <= '1';
							nstate <= "010";
							Flag(2) <= '1';
							--t3 <= t3 - 1;
						END IF;
					ELSIF (Type4 = '1') THEN
						IF(t4 /= 0) THEN
							P4 <= '1';
							Done <= '1';
							Busy <= '1';
							nstate <= "010";
							Flag(3) <= '1';
							--t4 <= t4 - 1;
						END IF;
					END IF;
				END IF;
			--END IF;
		ELSIF( state = "010") THEN
				P1 <='0';
				P2 <='0';
				P3 <='0';
				P4 <='0';
				Done <= '0';
				Busy <= '0';
				nstate <="000";
				Flag(0) <= '0';
				Flag(1) <= '0';
				Flag(2) <= '0';
				Flag(3) <= '0';
		END IF;
		WAIT ON CLK;
	END PROCESS;
	
	
end Behavioral;

