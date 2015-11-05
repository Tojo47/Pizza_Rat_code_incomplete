
    int ButtonGreen= 28; //button 28 is right button 30 is left
    int ButtonBlack = 30;
    int STATE = 0;
   
    int tim = 250;
    #include <LiquidCrystal.h>
    LiquidCrystal lcd(24,26, 10, 11, 12, 13);

/*
 * STATE 100: Postion of cursor
 * STATE 1: Press any button
 * STATE 2: Find pizza
 * STATE 3: Found pizza
 * STATE 4: Not found pizza 
 * STATE 5: Eat pizza 
 * STATE 6: Get killed by stroller and Pigeon
 * STATE 7: Game over
 * STATE 8: Take it away and try to bring it home
 * STATE 9: Encounter stairs
 * STATE 10: Throw it then get down the stairs
 * STATE 11: Drag it down with mouth
 * STATE 12: Get stepped by humans (Dead) and be in the news
 * STATE 13: Game over
 * STATE 14: Throw it then get down the stairs
 */
  




void setup() 
{
  // put your setup code here, to run once:
  
  lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
  pinMode(28,INPUT);
  pinMode(30, INPUT);

  
  pinMode(ButtonGreen,INPUT);
  pinMode(ButtonBlack,INPUT);
  digitalWrite(ButtonGreen, HIGH);
  digitalWrite(ButtonBlack, HIGH);

  Serial.begin(9600);
  
  STATE = 1;
}

void loop() 
{
  
  lcd.setCursor(0,0);  // set the cursor to column 15, line 0
  lcd.clear();
  
  if (STATE == 1) 
  { 
      lcd.print("Press any button");
      
      if (digitalRead(ButtonGreen) == LOW);
      {
        STATE = 2;
      }  
  }
      if (STATE == 2)
      {
        lcd.print("Find Pizza");
      }


      if (STATE == 3)
      {
        lcd.print("Found Pizza");
      }
      
      if (STATE == 4)
      {
        lcd.print("Not found Pizza");
      }      

      if (STATE == 5)
      {
        lcd.print("Eat pizza");
      }

      if (STATE == 6)
      {
        lcd.print("Killed by Pigeon");
      }

      if (STATE == 7)
      {
        lcd.print("Try again");
      }

      if (STATE == 8)
      {
        lcd.print("bring it home");
      }

      if (STATE == 9)
      {
        lcd.print("Encounter stairs");
      }

      if (STATE == 10)
      {
        lcd.print("Throw pizza ");
      }

      if (STATE == 11)
      {
        lcd.print("Got downstairs");
      }

      if (STATE == 12)
      {
        lcd.print("Drag pizza");
      }
      
      if (STATE == 13)
      {
        lcd.print("Killed by humans");
      }

      if (STATE == 14)
      {
        lcd.print("Try again");
      } 

      if (STATE == 15)
      {
        lcd.print(" Enter nest hole");
      }


      if (STATE == 16)
      {
        lcd.print("Too small");
      }

      if (STATE == 17)
      {
        lcd.print("Force pizza");
      }

      if (STATE == 18)
      {
        lcd.print("stuck");
      }

      if (STATE == 19)
      {
        lcd.print("eaten by a snake");
      }

      if (STATE == 20)
      {
        lcd.print("Try again");
      }

      if (STATE == 21)
      {
        lcd.print("Go around");
      }

      if (STATE == 22)
      {
        lcd.print("face frog gang");
      }

      if (STATE == 23)
      {
        lcd.print("Beat frogs");
      }

      if (STATE == 24)
      {
        lcd.print("Lost to frogs");
      }

      if (STATE == 25)
      {
        lcd.print("try again");
      }


      if (STATE == 26)
      {
        lcd.print("win to frog");
      }

      if (STATE == 27)
      {
        lcd.print("Got home");
      }
      
      if (STATE == 28)
      {
        lcd.print("YOU WIN!");
      }
                 
}
