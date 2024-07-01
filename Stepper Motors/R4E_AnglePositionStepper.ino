void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}



void loop() {
  // put your main code here, to run repeatedly:

for (int i=0, i<1000; i++)
{
Goclockwise(5);
}

delay (10000);

for (int i=0, i<1000; i++)
{
GoCounterClockwise(5);
}

 delay (10000);

}


//This Subroutine Spins the Motor Clockwise
void GoCounterClockwise(int timestep)
{
GotoZero();
delay(timestep);
goToFourtFive();
delay(timestep);
goToNinety();
delay(timestep);
goToOneThirtyFive();
delay(timestep);
goToOneEighty();
delay(timestep);
goToTwoTwentyFive();
delay(timestep);
goToTwoSeventy();
delay(timestep);
goToThreeFiteen();
delay(timestep);

}


//This Subroutine Spins the Motor CounterClockwise
void Goclockwise(int timestep)
{
GotoZero();
delay(timestep);
goToThreeFiteen();
delay(timestep);
goToTwoSeventy();
delay(timestep);
goToTwoTwentyFive();
delay(timestep);
goToOneEighty();
delay(timestep);
goToOneThirtyFive();
delay(timestep);
goToNinety();
delay(timestep);
goToFourtFive();
delay(timestep);

}







//This fucntion Spns PM to Zero Position

void goToZero()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
 
  }


  void goToFourtFive()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
 
  }


  
  void goToNinety()
{
  digitalWrite(8,LOW );
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
 
  }


  
  void goToOneThirtyFive()
{
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
 
  }


  
  void goToOneEighty()
{
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
 
 
  }

    
  void goToTwoTwentyFive()
{
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
 
  }

    
  void goToTwoSeventy()
{
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
 
  }

    
  void goToThreeFiteen()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
 
 
  }
    
  
