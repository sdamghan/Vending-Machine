----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:40:42 11/28/2015 
-- Design Name: 
-- Module Name:    CommunicationProtocol - Behavioral 
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

entity CommunicationProtocol is
	PORT ( Start, Clock: IN std_logic; Data_In: IN std_logic; 
	RST : IN std_logic; flag: IN std_logic_vector(3 DOWNTO 0);
	Type1Store, Type2Store, Type3Store, Type4Store: BUFFER Integer;
	Available : OUT std_logic);
end CommunicationProtocol;
-- LOCK IS BUSY
architecture Behavioral of CommunicationProtocol is
	Signal Types : std_logic_vector (1 DOWNTO 0);
	Signal Num : std_logic_vector(2 DOWNTO 0);
	Signal Pad : std_logic_vector(2 DOWNTO 0);
	Signal state : std_logic_vector (3 DOWNTO 0) := "0000";	
	Signal nstate: std_logic_vector (3 DOWNTO 0) := "0000";
	BEGIN
		PROCESS(Clock)
		BEGIN
			IF(Clock = '1' AND CLOCK'event) THEN
			state <= nstate;
			END IF;
		END PROCESS;
		PROCESS
		BEGIN			
				IF ( state = "0000") THEN
					IF( RST = '1') THEN
						Type1Store <= 0;
						Type2Store <= 0;
						Type3Store <= 0;
						Type4Store <= 0;
					END IF;
					IF( flag(0) = '1') THEN
						IF( Type1Store /= 0 AND Clock = '1' AND Clock'event)THEN
						Type1Store <= Type1Store - 1;
						END IF;
					ELSIF ( flag(1) = '1') THEN
						IF( Type2Store /= 0 AND Clock = '1' AND Clock'event)THEN
						Type2Store <= Type2Store - 1;
						END IF;
					ELSIF ( flag(2) = '1') THEN
						IF( Type3Store /= 0 AND Clock = '1' AND Clock'event)THEN
						Type3Store <= Type3Store - 1;
						END IF;
					ELSIF ( flag(3) = '1') THEN
						IF( Type4Store /= 0 AND Clock = '1' AND Clock'event)THEN
						Type4Store <= Type4Store - 1;
						END IF;
					END IF;
					IF( Start = '1')THEN
						Available <= '0';
						nstate <= "0001";
					END IF;
				ELSIF ( state = "0001") THEN
					Types(0) <= Data_In;
					nstate <= "0010";
				ELSIF ( state = "0010") THEN
					Types(1) <= Data_In;
					nstate <= "0011";
				ELSIF ( state = "0011") THEN
					Num(0) <= Data_In;
					nstate <= "0100";
				ELSIF ( state = "0100") THEN
					Num(1) <= Data_In;
					nstate <= "0101";
				ELSIF ( state = "0101") THEN
					Num(2) <= Data_In;
					nstate <= "0110";
				ELSIF ( state = "0110") THEN
					Pad(0) <= Data_In;
					nstate <= "0111";
				ELSIF ( state = "0111") THEN
					Pad(1) <= Data_In;
					nstate <= "1000";
				ELSIF ( state = "1000") THEN
					Pad(2) <= Data_In;
					nstate <= "1001";
				ELSIF ( state = "1001") THEN
					nstate <= "0000";
					IF( Types = "00") THEN
						Type1Store <= to_integer(unsigned(Num));
					ELSIF( Types = "01") THEN
						Type2Store <= to_integer(unsigned(Num));
					ELSIF( Types = "10") THEN
						Type3Store <= to_integer(unsigned(Num));
					ELSIF( Types = "11") THEN
						Type4Store <= to_integer(unsigned(Num));
					END IF;
				END IF;
				WAIT ON Clock, state;
		
	END PROCESS;

end Behavioral;

