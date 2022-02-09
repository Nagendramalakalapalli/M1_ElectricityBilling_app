# Domestic Electricity Bill System



# Description

   The **Domestic Electricity bill Calculation system** project  is a web application that is developed to automate the billing system of the electricity board.The aim of project is to develop a system that is meant to partially computerize the work performed in the Electricity Board like generating monthly electricity bill, record of consuming unit of energy, store record of the customer and previous unpaid record.It mainly focuses on the calculation of Units consumed during the specified time and the money to be paid to electricity offices.he tool used for writing the code in this project is visual studio code. This project has multi file and multiplatform approach(WSL).
 


# Features
  - Architecture of project is simple and easy to understand the code.
  - Calculating the total load and units consumed.
  - Calculating the cost per unit based on the area and units consumed.
  - Displaying the amount.

# SWOT Analysis
  
  ![SWOT](https://user-images.githubusercontent.com/82401251/152957947-c810e254-23c1-456f-ad05-bb5f5b93df44.png)



# 4W's & 1H
 
  ## 4W's

   * **WHAT**  : Electricity bill calculator.
   * **WHEN**  : For calculating the Electricity Bill.
   * **WHERE** : Domestic Area(Rural, Urban)
   * **WHY**   : For Billing purpose.

  ## 1H 

   **HOW**    : Calculates the user input as number of loads and gives the output.



# Requriements
  
  ## **High Level Requriements**
 
|HLR(ID)|Description|
--- | --- | 
|HLR01| Electricity bill calculation at Rural areas if(units<30)|
|HLR02| Electricity bill calculation at Rural areas if(units>30 && units <100)|
|HLR03| Electricity bill calculation at Rural areas if(units>101 && units <200)|
|HLR04| Electricity bill calculation at Rural areas if(units<200)|	
|HLR05| Electricity bill calculation at Urban areas if(units<30)|
|HLR06| Electricity bill calculation at Urban areas if(units>30 && units <100)|
|HLR07| Electricity bill calculation at Urban areas if(units>101 && units <200)|
|HLR08 |Electricity bill calculation at Urban areas if(units<200)|

 ## **Low Level Requriements**
   
|LLR(ID)|Description|
--- | --- | 
|LLR01_HLR01|	Calculates electricity bill at rural areas|
|LLR02_HLR02|	Calculates electricity bill at urban areas|	
|LLR03_HLR03|	Calculates total load at domestics places|
|LLR04	    | Calculates total unit consumed at domestics places|

