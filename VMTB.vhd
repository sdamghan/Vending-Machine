----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:24:00 11/28/2015 
-- Design Name: 
-- Module Name:    VMTB - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity VMTB is
end VMTB;

architecture Behavioral of VMTB is
	COMPONENT VM IS PORT(Type1, Type2, Type3, Type4, Money, Start, CLK, RST : IN std_logic;
		  Data_In: IN std_logic; Done, OutOfService, P1, P2, P3, P4: OUT std_logic;
		  Busy :OUT std_logic;
		  Empty : OUT std_logic_vector(3 DOWNTO 0));
	END COMPONENT;
	
	SIGNAL Type1,Type2,Type3,Type4,Money,Start,CLK,RST,Data_In: std_logic;
	SIGNAL Done, OutOfService, P1,P2,P3,P4,Busy : std_logic ;
	SIGNAL Empty : std_logic_vector(3 DOWNTO 0);
	
	
	BEGIN
	mapping: VM PORT MAP(Type1, Type2, Type3, Type4, Money, Start, CLK, RST,
		  Data_In, Done, OutOfService, P1, P2, P3, P4,Busy,Empty);
	PROCESS
		BEGIN
		CLK <='0';
		wait for 5ns;
		CLK <='1';
		wait for 5ns;
		wait on CLK;
	END PROCESS;
	PROCESS
		BEGIN
		Start <= '1';
		Data_In <= '1';
		wait for 10ns;
		Start <= '0';
		Money <= '1';
		Type1 <= '1';
		wait for 1000ns;
		wait on CLK;
	END PROCESS;
end Behavioral;

