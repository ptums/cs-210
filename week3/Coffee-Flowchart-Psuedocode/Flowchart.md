# Coffee Maker Psuedocode

 - Pour water and coffee into the coffee machine 
 - Display current time to user then display the options ON, OFF, PROGRAM
 - Then set up a variable that will tally the number of times the users selects ON.
 - Then set up a decision branch for each ON, OFF, PROGRAM button tasks.
    - ```
        if(buttonPress == "ON" ) {
           if(onButtonPress == 1) {
             // run coffee brewing function
             brewCoffee();

           } else if (onButtonPress == 2) {
              // Then a blank timer will display to the user and the user can set which time they want to start the brew process
              // If the user changes the time and presses ON one more time that set time is saved.
              // Then the user is prompted to press PROGRAM and then the brew coffee function will run when the set time is equal to the current time.
           }
         } else if(buttonPress == "OFF") {
           // delete saved set time
           // display current time to the user

         } else if (buttonPress == "PROGRAM") {
            // set up decision branch to run brew coffee function 
            brewCoffee();
            
            if(currentTime == setTime) {
              brewCoffe();
            }
         }

       ```
 - Outside the decision branch we initialize the brew coffee function.
   - ```
      void brewCoffee() {
        // Inside this function we have two sensors the water amount sensor and the heating sensor.
        // The heating sensor is a variable is a number set to 0 and the amount sensor is set to the number 0
        bool heatingSensor = 0;
        bool amountSensor = 0;
        
        // Next we set up two more variables that will be set to booleans
        bool brew = true;
        bool empty = false;
        
        
        // Then a while loop is called with brew as its parameter and the mechanism to boil the water starts.
        while(brew) {
            // increase the heating sensor by 1 every minute using ualarm https://pubs.opengroup.org/onlinepubs/007908799/xsh/ualarm.html
            heatingSenor = heatingSensor + 1;
            
            // Then we initialize a decision branch when the heating sensor variable is equal three we set the brew variable to false.
            if(heatinSensor == 3) {
              brew = false;
            }
           
        }
      }
   ```
   - ```
     // Outside the while loop we set up another decision branch that'll execute if the brew variable is false.
     if(brew == false) {
     
       // Inside that decision branch we run while loop with the empty variable variable as the parameter.
       while(empty) {
        
         // Then we increase the amount sensor variable by 1 every minute. 
         amountSensor = amountSensor + 1;
         
         // if amount sensor is less than ten run the drain water into coffee grind basket function
         // once it the amount sensor is ten we set the empty variable to be true;
         if(amountSensor <= 10) {
             
             // run the drain water into coffee grind basket function
             drainWaterIntoCofeeBasket();
         }else {
           empty = true;
         }
       
       }
     }
     
     ```
