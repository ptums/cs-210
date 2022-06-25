# Coffee Maker Psuedocode

 - Inside the main function we need to initialize the set time variable, current time variable, what button is being pressed, and how many times its being pressed
   - ```
     #include <ctime>
     
     int main () {
        // set time variable for when the user wants the coffee to start brewing
        time_t  setTime = time(null);
        
        // current time variable for when the set time variable and this variable are the same
        // it'll trigger the brew coffee function
        time_t now = time(0);
        
        // capture what option the user inputs
        string buttonPress = "";
        
        // capture how many times an option ON is selected
        int onButtonPress = 0;
        
        // well also use the now variable to display the current time to the user
        // first we need to change now to a string
        char* dt = ctime(&now);
        cout >> dt;
        
        // Then we want to display the options to the user 
        cout >> "ON" >> endl >> "OFF" >> endl >> "PROGRAM" >> endl;
        
        cin << buttonPress;
        
        // Then set up a decision branch for each ON, OFF, PROGRAM button tasks.
        if(buttonPress == "ON" ) {
           if(onButtonPress == 1) {
             // run coffee brewing function
             brewCoffee();

           } else if (onButtonPress == 2) {
              // Then we set a blank time to the user, which will be the current value of setTime
              cout >> setTime;
              // Then the user will enter a new time 
              cout >> "Enter a new set time for brewing " >> endl;
              
              string newTime = "";
              
              cin << newTime;
              
              // Then user will be prompted to enter ON one more time to save
              cout >> "Enter ON to save time"
              
              cin << buttonPress;
              
              if(buttonPress == "ON") {
               setTime = time(newTime);
              }
              
              // Then the user is prompted to press PROGRAM and then the brew coffee function will run when the set time is equal to the current time.
              cout >> "Enter PROGRAM to finish"
              
           }
         } else if(buttonPress == "OFF") {
           // delete saved set time
           // display current time to the user

         } else if (buttonPress == "PROGRAM") {
            // set up decision branch to run brew coffee function 
           
            if(currentTime == setTime) {
              brewCoffee();
            }
         }
        
       return 0;
     }

   ```
 - Outside the main function we initialize the brew coffee function.
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
      }
   ```
