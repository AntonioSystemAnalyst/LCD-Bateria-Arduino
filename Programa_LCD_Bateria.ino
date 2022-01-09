#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void stage1 ();
void stage2 ();
void stage4 ();
void stage5 ();
void stage6 ();
void stage10 ();
void stage11 ();
int contu =  0;
int contd =  0;
int contc =  1;
int contqtd  = 0;
int i; 
 byte customChar[] = {
  B01110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
void setup() {

  lcd.begin(16, 2);
   stage11 ();

}

void loop() {
  
  
    for (i=0; i<=100; i++)
	{

           if (contqtd == 10)
           {
           	 contc   = 1;
           	 contu   = 0;
           	 contd   = 0;
           	 contqtd = 0;
             stage11 ();
		   }
		   else
		   {
		   	  contc = 0;
		   }
		   
           // --------------------------------------- // 
               
                lcd.setCursor(7, 1);
                lcd.print("%");
      
                lcd.setCursor(6, 1);
                lcd.print(contu);  

                lcd.setCursor(5, 1);
                lcd.print(contd);
                if (contc != 1)
                {
                  lcd.setCursor(4, 1);
                  lcd.print("");
                }
                else
                {
                  if (contc == 1)
                  {
                     lcd.setCursor(4, 1);
                     lcd.print("1");
                  } 

                }         
           // --------------------------------------- //
            if (contc == 1)
            { 
              stage1 ();
              contc  = 0;
              lcd.setCursor( 2 , 0);
              lcd.print (" CARREGADA !!!");
              delay (4000);
              lcd.clear();
              stage11 ();
            }
             else
            {
               if (contu == 0 && contd == 8)
               {
                   stage2 ();

               }
               else
               {
                 if(contu == 0 && contd == 6)
                 {
                    stage4();

                 }
                 else
                 {
                   if (contu == 0 && contd == 4)
                   {
                      stage5 ();

                   }
                   else
                   {
                      if(contu == 0 && contd == 2)
                      {
                          stage6 ();

                      }
                      else
                      {
                        if(contu == 0 && contd == 0)
                        {
                             stage11 ();

                        }                 
                      }
                   }
                 }
               }
            }
           // --------------------------------------- //
		   contu = contu + 1;	   
		   if (contu == 10)
		   {
			   contu = 0;
			   contd = contd + 1;
			   
		   }
		   if (contd == 10)
		   {
			    contqtd = 10;
			    contd = 0;
		   }
      delay(100);
	}
    
}
// ------------------------------- //




void stage1 ()
{
  byte customChar[] = {
  B01110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
  lcd.createChar(1, customChar);
  lcd.home();
  lcd.write(1);
}
void stage2 ()
{
  byte customChar[] = {
  B01110,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
  lcd.createChar(1, customChar);
  lcd.home();
  lcd.write(1);
}

void stage4 ()
{
  byte customChar[] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111
};
     lcd.createChar(1, customChar);
     lcd.home();
     lcd.write(1);
}
void stage5 ()
{
  byte customChar[] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111
};
     lcd.createChar(1, customChar);
     lcd.home();
     lcd.write(1);
}
void stage6 ()
{
  byte customChar[] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111
};
     lcd.createChar(1, customChar);
     lcd.home();
     lcd.write(1);
}

void stage11 ()
{
  byte customChar[] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111
};
  lcd.createChar(1, customChar);
  lcd.home();
  lcd.write(1);
}

void stage10 ()
{
  byte customChar[] = {
  B01110,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
  lcd.createChar(1, customChar);
  lcd.home();
  lcd.write(1);
}
