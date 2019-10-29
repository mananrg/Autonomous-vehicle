void dist(int trigPin,int echoPin)
 {
 digitalWrite(trigPin, LOW);// sending 10 us pulse
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  timeperiod = pulseIn(echoPin, HIGH);  // integrating pulse 

 cm = (timeperiod/2)/29.1;
 }





 
 void Data()
 {
  a=digitalRead(D0);
  b=digitalRead(D1);
  c=digitalRead(D2);
  d=digitalRead(D3); 

  data=8*d+4*c+2*b+a;
  Serial.println(data);
  delay(100);
  }








void Forward()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,255);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,255);
  
}


void Backward()
{
  digitalWrite(Motor1Pin1, HIGH);
  digitalWrite(Motor1Pin2, LOW);
  analogWrite(Motor1,255);

  digitalWrite(Motor2Pin1, HIGH);
  digitalWrite(Motor2Pin2, LOW);
  analogWrite(Motor2,255);
  
}

void Stop()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,0);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,0);
  
}

void Left1()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,160);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,255);
  
}

void Left2()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,90);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,255);
  
}


void Left3()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,50);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,255);
  
}

void Right1()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,255);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,160);  
  
}
void Right2()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,255);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,90);   
  
}

void Right3()
{
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  analogWrite(Motor1,255);

  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
  analogWrite(Motor2,50);   
  
}
