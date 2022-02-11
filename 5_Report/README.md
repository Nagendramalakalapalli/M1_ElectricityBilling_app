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
  

# **Behavior Diagrams**


## **High Level Behavioural Diagram**

![Behavior Diagram](https://user-images.githubusercontent.com/82401251/152932754-1ff90616-8002-4c86-bf81-6a85f4682957.jpg)

## **Low Level Behavioural Diagram**

![Behavior_Diagram](https://user-images.githubusercontent.com/82401251/152674174-a4aa0208-4849-442a-bad9-49239e5f89c9.jpg)


# **Structural Diagram**

## **High Level Structural Diagram**

![Structural_Diagram](https://user-images.githubusercontent.com/82401251/152674189-008cc41d-f0cf-4b90-a2a5-e715aaadc6a6.jpg)


## **Low Level Structural Diagram**

![Structural](https://user-images.githubusercontent.com/82401251/152933073-3ad005ef-ad1d-470b-b270-ff75a9dd5c3b.png)


# **Tested Output**

  
## High-Level Requriements

|Test ID| HLR | Description| Inputs|Expected O/P | Actual O/P|
--- | --- | --- | --- | --- | --- |
|TD01|HLR01|Calculating Rural areas electricity bill|Choice|Sucess|Sucess|
|TD02|HLR02|Calculating Urban areas electricity bill|Choice|Sucess|Sucess|
|TD03|HLR03|Calculating total amount at Domestics places|Choice|Sucess|Sucess|
|TD04|HLR04|Calculates total unit consumed at Domestics places|Choice|Sucess|Sucess|


## Low-Level Requriements


|Test ID| LLR | Description| Inputs(Units)|Expected O/P (Amount)| Actual O/P (Amount)|
--- | --- | --- | --- | --- | --- |
|TD01|LLR01_HLR01|Electricity bill calculation at Rural areas if(units<30)|   25|  78.75| 78.75|
|TD02|LLR02_HLR01|Electricity bill calculation at Rural areas if(units>30 && units <100)|   45|  198.0|  198.0|
|TD03|LLR03_HLR01|Electricity bill calculation at Rural areas if(units>101 && units <200)|  112|  666.4| 666.4|
|TD04|LLR04_HLR01|Electricity bill calculation at Rural areas if(units<200)|   235|  1598.0|  1598.0|
|TD05|LLR05_HLR02|Electricity bill calculation at Urban areas if(units<30)|   15|   48.75|   48.75|
|TD06|LLR06_HLR02|Electricity bill calculation at Urban areas if(units>30 && units <100)|   55|  258.5| 258.5|
|TD07|LLR07_HLR02|Electricity bill calculation at Urban areas if(units>101 && units <200)|   101|   631.25|   631.25|
|TD08|LLR08_HLR02|Electricity bill calculation at Urban areas if(units<200)|   201|   1467.3| 1467.3|

# **Output**


![page_1](https://user-images.githubusercontent.com/82401251/153375150-1977183d-ea16-45cd-bc4e-035bf5966c99.png)
![Rural](https://user-images.githubusercontent.com/82401251/153375123-c185c24c-e406-4709-8b12-30f3417627d3.png)
![Urban](https://user-images.githubusercontent.com/82401251/153375205-8b0078f2-0176-4d31-afcb-d035d3d657cb.png)
![Urban out](https://user-images.githubusercontent.com/82401251/153375235-53765530-21c0-43c4-ab24-abd32f13582c.png)
![Urban_1](https://user-images.githubusercontent.com/82401251/153375267-2e721f89-8904-48aa-afb4-865ea009a39a.png)
![Urban_1 out](https://user-images.githubusercontent.com/82401251/153375298-3ae94b74-f5c3-4799-8f63-8d4682d4392d.png)

