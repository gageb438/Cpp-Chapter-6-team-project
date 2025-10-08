# Chapter 6 team project
Gage, Jacob

## Travel Expenses Description

#### Function Diagrams

| `daysOnTrip`    |               |  gage     |
| ------------------ | ------------- | ------------ |
| Accepts no arguments |
| Takes input for the number of days spent on the trip |
|and returns it |
***

| `departure`    |               |     jacob   |
| ------------------ | ------------- | ------------ |
| Accepts no arguments|
| Takes input for the departure time|
| and returns it|
***

| `arrival`    |               |     gage   |
| ------------------ | ------------- | ------------ |
| Accepts no arguments|
| Takes input for the arrival time|
| and retunrs it|
***

|  `roundTrip` | | jacob |
| -- | -- | -- |
| Accepts no arguments |
| Takes input for the cost of a round trip |
| and returns it |
***

| `carRentals` | | gage |
| -- | -- | -- |
| Accepts no arguments |
| Takes input to see if car rentals were used |
| if so, it takes input for the cost of them |
| and return it |
***

| `milesDriven` | | jacob |
| -- | -- | -- |
| Accepts no arguments |
| takes input for the number of miles driven using a private vehicle|
| and calculates the cost at $0.27 a mile.|
| then returns it|
***

| `parkingFees` | | gage |
| -- | -- | -- |
| accepts no arguments |
| asks for number of days there were parking fees |
| then asks for the total cost of parking fees (if the days was not 0)|
| and calculates the total by taking total -= days * 6|
| and returns total (double) |
***

| `taxiFees` | | jacob |
| -- | -- | -- |
| accepts no arugments|
| asks for hte number of days a taxi was used.|
| asks for the total cost|
| takes total cost -= 10 * days |
| validate the cost was not <0 and return the cost|
***

| `conferenceFees` | | gage |
| -- | -- | -- |
| accepts no arguments|
| asks the user for the cost of conference fees|
| and returns it|
***

| `lodgingFees` | | jacob |
| -- | -- | -- |
| accepts an argument for the number of days spent on the trip|
| asks for lodging fees |
| takes lodging fees -= days * 90|
| and returns lodging fees, if its <0. return 0.|
***

| `mealFees` | | gage |
| -- | -- | -- |
| accepts departure and arrival variables |
| ask for the total cost of all meals |
| if depature time is <7.00 then ask for cost of breakfast |
| if departure time is <12.00 then ask for the cost of lunch |
| if the departure time is <18.00 then ask for the cost of dinner |
| if arrival time is >8.00 then ask for the cost of breakfast |
| if the arrival time is >13.00 then ask for the cost of lunch|
| if the arrival time is >19.00 then ask for the cost of dinner |
| company pays $9 for breakfast, $12 for lunch, $16 for dinner.|
| calculate the cost - the amount the company will pay for the amount to return |
| returns the cost - amount company will pay. |
