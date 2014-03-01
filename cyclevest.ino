const unsigned char leftSignal = A2;
const unsigned char rightSignal = A3;
unsigned char leftbuttonState = 0; 
unsigned char rightbuttonState = 0;
volatile unsigned int counter =0;

void setup() {                
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A2, INPUT);  
  pinMode(A3, INPUT);
}

void loop(){
//  leftbuttonState = digitalRead(leftSignal);
//  rightbuttonState = digitalRead(rightSignal);
//  if (leftbuttonState == LOW) 
//  {
//    digitalWrite(4, LOW);
//    digitalWrite(5, LOW);
//    while(counter <= 10)
//    {
//       counter ++;
//       digitalWrite(2, HIGH);
//       delay(100); 
//       digitalWrite(2, LOW);
//       delay(100); 
//    }
//    counter =0;  
//  }
  
//  if (rightbuttonState == LOW) 
//  {
//    while(counter <= 15)
//    {
//      counter ++;
//      digitalWrite(5, HIGH);
//      delay(500); 
//      digitalWrite(6, LOW);
//      delay(500);
//    }
//    counter =0;
//  }
  
//  if((rightbuttonState ==HIGH)&&(leftbuttonState ==HIGH))
//  {
//    digitalWrite(9, HIGH);
//    delay(500);
//    digitalWrite(10, HIGH);
//    delay(500);   
//  }
   for (int i=0; i <= 5; i++){  
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   delay(500);
   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   delay(500);
   }
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);

   for (int i=0; i <= 5; i++){  
   digitalWrite(10,HIGH);
   digitalWrite(11,LOW);
   delay(500);
   digitalWrite(10,LOW);
   digitalWrite(11,HIGH);
   delay(500);
   }
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
}
