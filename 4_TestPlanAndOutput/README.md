# **Test Plan and Output**

## High-Level Requriements

|Test ID| HLR | Description| Inputs(Units)|Expected O/P (Amount)| Actual O/P (Amount)|
--- | --- | --- | --- | --- | --- |
|TD01|HLR_01|Electricity bill calculation at Rural areas if(units<30)|   25|  78.75| 78.75|
|TD02|HLR_02|Electricity bill calculation at Rural areas if(units>30 && units <100)|   45|  198.0|  198.0|
|TD03|HLR_03|Electricity bill calculation at Rural areas if(units>101 && units <200)|  112|  666.4| 666.4|
|TD04|HLR_04|Electricity bill calculation at Rural areas if(units<200)|   235|  1598.0|  1598.0|
|TD05|HLR_05|Electricity bill calculation at Urban areas if(units<30)|   15|   48.75|   48.75|
|TD06|HLR_06|Electricity bill calculation at Urban areas if(units>30 && units <100)|   55|  258.5| 258.5|
|TD07|HLR_07|Electricity bill calculation at Urban areas if(units>101 && units <200)|   101|   631.25|   631.25|
|TD08|HLR_08|Electricity bill calculation at Urban areas if(units<200)|   201|   1467.3| 1467.3|


## Low-Level Requriements

|Test ID| HLR | Description| Inputs|Expected O/P | Actual O/P|
--- | --- | --- | --- | --- | --- |
|TD01|LLR01|Calculating Rural areas electricity bill|Choice|Sucess|Sucess|
|TD02|LLR02|Calculating Urban areas electricity bill|Choice|Sucess|Sucess|
|TD03|LLR03|Calculating total amount at Domestics places|Choice|Sucess|Sucess|
|TD04|LLR04|Calculates total unit consumed at Domestics places|Choice|Sucess|Sucess|
