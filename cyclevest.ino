const unsigned char leftSignal = A2;
const unsigned char rightSignal = A3;
unsigned char leftbuttonState = 0; 
unsigned char rightbuttonState = 0;
volatile unsigned int counter =0;

void setup() {                
  pinMode(2, OUTPUT);  // channel A  
  pinMode(3, OUTPUT);  // channel B   
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A2, INPUT);  
  pinMode(A3, INPUT);
}

void loop(){
  leftbuttonState = digitalRead(leftSignal);
  rightbuttonState = digitalRead(rightSignal);
  if (leftbuttonState == LOW) 
  {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    while(counter <= 10)
    {
       counter ++;
       digitalWrite(2, HIGH);
       delay(100); 
       digitalWrite(2, LOW);
       delay(100); 
    }
    counter =0;  
  }
  
  if (rightbuttonState == LOW) 
  {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    while(counter <= 15)
    {
      counter ++;
      digitalWrite(3, HIGH);
      delay(100); 
      digitalWrite(3, LOW);
      delay(100);
    }
    counter =0;
  }
  
  if((rightbuttonState ==HIGH)&&(leftbuttonState ==HIGH))
  {
  //  digitalWrite(2, LOW);
  //  digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);   
  }

}
