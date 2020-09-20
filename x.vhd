--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:40:50 11/28/2015
-- Design Name:   
-- Module Name:   I:/Xilinx_Projects/CAD/CA3/test1/VendingMachine/x.vhd
-- Project Name:  VendingMachine
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: VM
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY x IS
END x;
 
ARCHITECTURE behavior OF x IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT VM
    PORT(
         Type1 : IN  std_logic;
         Type2 : IN  std_logic;
         Type3 : IN  std_logic;
         Type4 : IN  std_logic;
         Money : IN  std_logic;
         Start : IN  std_logic;
         CLK : IN  std_logic;
         RST : IN  std_logic;
         Data_In : IN  std_logic;
         Done : OUT  std_logic;
         OutOfService : OUT  std_logic;
         P1 : OUT  std_logic;
         P2 : OUT  std_logic;
         P3 : OUT  std_logic;
         P4 : OUT  std_logic;
         Busy : OUT  std_logic;
         Empty : OUT  std_logic_vector(3 downto 0);
			TT : OUT std_logic_vector(2 DOWNTO 0);
			FF : OUT Std_logic_vector(3 DOWNTO 0)
		 );
    END COMPONENT;
    

   --Inputs
   signal Type1 : std_logic := '0';
   signal Type2 : std_logic := '0';
   signal Type3 : std_logic := '0';
   signal Type4 : std_logic := '0';
   signal Money : std_logic := '0';
   signal Start : std_logic := '0';
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal Data_In : std_logic := '0';

 	--Outputs
   signal Done : std_logic;
   signal OutOfService : std_logic;
   signal P1 : std_logic;
   signal P2 : std_logic;
   signal P3 : std_logic;
   signal P4 : std_logic;
   signal Busy : std_logic;
   signal Empty : std_logic_vector(3 downto 0);
	signal TT : std_logic_vector(2 downto 0);
	signal FF : std_logic_vector(3 downto 0);
   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: VM PORT MAP (
          Type1 => Type1,
          Type2 => Type2,
          Type3 => Type3,
          Type4 => Type4,
          Money => Money,
          Start => Start,
          CLK => CLK,
          RST => RST,
          Data_In => Data_In,
          Done => Done,
          OutOfService => OutOfService,
          P1 => P1,
          P2 => P2,
          P3 => P3,
          P4 => P4,
          Busy => Busy,
          Empty => Empty,
			 TT => TT,
			 FF => FF
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		wait for CLK_period;
		RST <= '1';
		wait for 100ns;
		RST <= '0';
      wait for CLK_period;
		Start <= '1';
		wait for CLK_period;
		Start <= '0';
		Data_In <= '0';
		wait for CLK_period;
		Data_In <= '0';
		wait for CLK_period;
		Data_In <= '1';
		wait for CLK_period;
		Data_In <= '1';
		wait for CLK_period;
		Data_In <= '0';
		wait for CLK_period;
		Data_In <= '0';
		wait for 5*CLK_period;
		Type1 <= '1';
		Money <= '1';
		wait for 20*CLK_period;
		Type1 <= '0';
		Money <= '0';
		wait for CLK_period;
		Start <= '1';
      wait for CLK_period;
		Start <= '0';
		Data_In <= '0';
		wait for CLK_period;
		Data_In <= '0';
		wait for CLK_period;
		Data_In <= '1';
		wait for CLK_period;
		Data_In <= '1';
		wait for CLK_period;
		Data_In <= '1';
		wait for CLK_period;
		Data_In <= '0';
		wait for CLK_period;
		Type1 <='1';
		Money <='1';
		wait;
   end process;

END;
