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



# 5W's & 1H

 ![5W1H](https://user-images.githubusercontent.com/82401251/153540939-cbe7fcc7-05d6-4907-9f4c-aa42e90275a0.jpg)


# Requriements
  
## **High Level Requriements**
 
|HLR(ID)|Description|
--- | --- | 
|HLR01|	Calculates electricity bill at Rural areas|
|HLR02|	Calculates electricity bill at Urban areas|	
|HLR03|	Calculates total Amount at Domestics places|
|HLR04| Calculates total unit consumed at Domestics places|

## **Low Level Requriements**
   
|LLR(ID)|Description|
--- | --- | 
|LLR01_HLR_01| Electricity bill calculation at Rural areas if(units<30)|
|LLR02_HLR_01| Electricity bill calculation at Rural areas if(units>30 && units <100)|
|LLR03_HLR_01| Electricity bill calculation at Rural areas if(units>101 && units <200)|
|LLR04_HLR_01| Electricity bill calculation at Rural areas if(units<200)|	
|LLR05_HLR_02| Electricity bill calculation at Urban areas if(units<30)|
|LLR06_HLR_02| Electricity bill calculation at Urban areas if(units>30 && units <100)|
|LLR07_HLR_02| Electricity bill calculation at Urban areas if(units>101 && units <200)|
|LLR08_HLR_02| Electricity bill calculation at Urban areas if(units<200)|