# Coffee Maker Psuedocode

 - Pour water and coffee into the coffee machine 
 - Display current time to user then display the options ON, OFF, PROGRAM
 - Then set up a variable that will tally the number of times the users selects ON.
 - Then set up a decision branch for each ON button task.
   - If user presses ON once then the coffee brewing process will begin.
     - This will be a function because we will be reusing these cofee brewing steps through the program.
   - If the user presses ON twice
     - Then a blank timer will display to the user and the user can set which time they want to start the brew process
     - If the user changes the time and presses ON one more time that set time is saved.
     - Then the user is prompted to press PROGRAM and then the brew coffee function will run when the set time is equal to the current time.
 -- There is also an else if statement for this branch if the user presses OFF.
 --- If the user presses OFF the the saved time is erased and the current time is displayed to the user.
 - Outside the decision branch we initialize the brew coffee function.
   - Inside this function we have two sensors the water amount sensor and the heating sensor.
   - The heating sensor is a variable is a number set to 0 and the amount sensor is set to the number 0
     - ``bool heatingSensor = 0; bool amountSensor = 0;``
   - Next we set up two more variables that will be set to booleans.
   - The first variable is brew which is set to true and the secomd variable is empty which is set to false
   - ``bool brew = true; bool empty = false;``
   - Then a while loop is called with brew as its parameter and the mechanism to boil the water starts.
   - ```
      while (brew) {
        // increase the heating sensor by 1 every minute using ualarm https://pubs.opengroup.org/onlinepubs/007908799/xsh/ualarm.html
        heatingSenor = heatingSensor + 1;
        
        // Then we initialize a decision branch when the heating sensor variable is equal three we set the brew variable to false.
        if(heatinSensor == 3) {
         brew = false;
        }

      }
      ```
 -- Outside the while loop we set up another decision branch that'll execute if the brew variable is false.
 --- Inside that decision branch we run while loop with the empty variable variable as the parameter.
 --- And inside the while loop we run the drain water into coffee grind basket mechanism.
 --- Then we increase the amount sensor variable by 1 every minute. 
 --- Then we set up a decision branch that will run when the amount sensor variable is set to ten and inside that decision branch the empty variable will be set to true.
