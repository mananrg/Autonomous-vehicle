#define Motor1Pin1 2
#define Motor1Pin2 3
#define Motor1     4
#define Motor2Pin1 5
#define Motor2Pin2 6
#define Motor2     7 

#define trigPin1   8    
#define echoPin1   9
#define trigPin2   10    
#define echoPin2   11
#define trigPin3   22   
#define echoPin3   23

long cm, timeperiod, distance, rSensor, mSensor, lSensor;

const int D0=30;  //Rpi pin21 LSB
const int D1=31;  //Rpi pin22
const int D2=32;  //Rpi pin23
const int D3=33; // Rpi pin24 MSB
int a,b,c,d,data;


void setup()
{
  pinMode(Motor1Pin1,OUTPUT);
  pinMode(Motor1Pin2,OUTPUT);
  pinMode(Motor1    ,OUTPUT);
  pinMode(Motor2Pin1,OUTPUT);
  pinMode(Motor2Pin2,OUTPUT);
  pinMode(Motor2   , OUTPUT);
  
  pinMode(trigPin1, OUTPUT); 
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT); 
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT); 
  pinMode(echoPin3, INPUT);

  pinMode(D0, INPUT);
  pinMode(D1, INPUT);
  pinMode(D2, INPUT);
  pinMode(D3, INPUT); 

   digitalWrite(D0,LOW);
   digitalWrite(D1,LOW);
   digitalWrite(D2,LOW);
   digitalWrite(D3,LOW);
  
  digitalWrite(Motor1Pin1,LOW);
  digitalWrite(Motor1Pin2,LOW);
  digitalWrite(Motor2Pin1,LOW);
  digitalWrite(Motor2Pin2,LOW);
  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(LED_BUILTIN,LOW);
  Serial.begin(9600);
 
  }

void loop()
{

dist(trigPin1, echoPin1);
mSensor = cm;
dist(trigPin2,echoPin2 );
lSensor = cm;
dist(trigPin3,echoPin3);
rSensor = cm;

 
 if(lSensor<12 || mSensor<12 || rSensor<12)
 {
   digitalWrite(Motor1Pin1,LOW);
   digitalWrite(Motor1Pin2,LOW);
   digitalWrite(Motor2Pin1,LOW);
   digitalWrite(Motor2Pin2,LOW);
   Serial.println("Stopped");
   digitalWrite(LED_BUILTIN,HIGH);
   }
   
  else
  {

 Data();
  if(data==0)
   {
     Forward();
     Serial.println("Forward");
   }
   
  else if(data==1)
   {
     Right1();
     Serial.println("Right1");
   }
     
  else if(data==2)
   {
     Right2();
     Serial.println("Right2");
   }
     
  else if(data==3)
   {
     Right3();
     Serial.println("Right3");
   }
     
  else if(data==4)
   {
     Left1();
     Serial.println("Left1");
   }
    
  else if(data==5)
   {
     Left2();
     Serial.println("Left2");
   }
    
  else if(data==6)
   {
     Left3();
     Serial.println("Left3");
   }
  
  else if (data>6)
   {
     Stop();
     Serial.println("Stop");
   }
   
digitalWrite(LED_BUILTIN,LOW);
Serial.print("LEFT: ");
 Serial.print(lSensor);
 Serial.print("\t");
 Serial.print("MIDDLE: ");
 Serial.print(mSensor);
 Serial.print("\t");
 Serial.print("RIGHT: ");
 Serial.print(rSensor);
 Serial.println("__________________________________________________________________________________________________________________");
 delay(500);

 }
  }
