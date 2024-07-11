const int buzzer = 9;
const int echo = 11;
const int trig = 10;
float distance, duration;
void setup() {
  // put your setup code here, to run once:  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, HIGH);
  delay(3000);
  digitalWrite(buzzer, LOW);
 pinMode(echo, INPUT);
 pinMode(trig, OUTPUT);

 
}

void loop() {
   // put your main code here, to run repeatedly:

 digitalWrite(echo, HIGH);
 delay(1000);
 digitalWrite(echo, LOW);
 
 digitalWrite(trig, HIGH);
 delay(1000);
 digitalWrite(trig, LOW);
 
  duration = pulseIn(echo, HIGH);
 Serial.print("Duration :");
 Serial.println(duration);
 distance = (duration*0.343)/2;
 Serial.print("Distance: ");
 Serial.println(distance);
 if (distance < 400) {
  digitalWrite(buzzer, HIGH);
 }

else{
  digitalWrite(buzzer, LOW);
  
  } 
  delay(100);
 } 
