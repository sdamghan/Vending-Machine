<p align="center">
  <img width="460" height="300" src="https://github.com/sdamghan/Vending-Machine/blob/readme/imgs/diagram1">
</p>

<<<<<<< HEAD
<p align="center">
  Figure 1- Block diagram of the module
</p>
=======
Figure 1- Block diagram of the module
>>>>>>> 18651775f3ee79f69e514a31076f06d0b81fe7d9


## 1. General View

A vending machine is a machine that dispenses items such as snacks, chocolate bar and tea to
customers automatically, after the customer inserts credit or coin into the machine.

The vending machine should process customer requests. Also, this vending machine is controllable, which means an administrator can program the machine.
There are two types of input signals:

* This vending machine has 4 types of products at the same price. When the “Money” signal goes high, it means that the customer has put a valid coin in the machine and at the same time, the assertion of each input signal “Type 1” to “Type 4” means that the customer wants the corresponding product. For any request, one of these 4 signals can be selected.

* Administrator Signals: These signals are used for managing the machine. These signals are used for managing the machine. Whenever the administrator wants to program the machine via some commands, the “Start” signal is asserted. The commands from the administrator are placed serially on the “Data_In” signal (1-bit width). These commands specify how many products of each type, the administrator wants to put in the machine. (For example, a command can specify how many chocolate bars)

The machine has 8 output signals. When the machine has the requested product, one of the “P1” to “P4” signals is set to 1 according to the requested product. The “Empty” signal shows if the machine has run out of the requested product or not. Each bit of the “Empty” signal corresponds to one product: first bit for product1 and last bit for product4.

The “Busy” signal shows whether the machine is busy processing a request, either from a customer or the administrator (administration or customer operation). In this case, a new request cannot be accepted.

If the machine has not been programmed by the administrator (to initialize the available products), any request from the user has to be rejected. In this case, an “Out Of Service” signal should be asserted.

Notes:

* Assertion of the “RST” signal makes the machine to go to its initial state, where it has zero product of each type.
* “Done” signal tells the administrator that the machine has successfully received the command and also updated the product count.


## 2. Design

The main design can be separated into two parts.

### 2.1 Communication Protocol Part

In order to successfully get the commands from the administrator, we have to define a communication protocol.
Whenever the “Start” signal goes high, at the following clock cycle, the commands are begin to send serially in an eight-bit package, with LSB sent at first. When the “Start” signal is asserted, it will be kept high for just one clock cycle. The data frame of the protocol is shown in Figure 2.


<p align="center">
  <img width="460" height="300" src="https://github.com/sdamghan/Vending-Machine/blob/readme/imgs/diagram2.png">
</p>

<p align="center">
Figure 2- Data frame of the protocol
</p>




### 2.2 Main Part

The main part is responsible for processing commands from the administrator, processing the customer requests, and generating the appropriate output signals. At first, it waits for the administrator for information (on initial product count). Thus, the information will retrieve via the communication controller before starting to service users. It means that the main part first receives an eight-bit data from the communication controller which contains the command.

<p align="center">
  <img width="460" height="300" src="https://github.com/sdamghan/Vending-Machine/blob/readme/imgs/diagram3.png">
</p>

<p align="center">
Figure 3- Format of the input data
</p>

The “Type” section specifies the product and the “Num” section determines how many products of “Type” are available in the machine.

