#define A_IN1 13
#define A_IN2 12
#define A_PWM 11

#define STBY 7

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(STBY, HIGH); 

  while(true)
  {
    digitalWrite(A_IN1, HIGH);
    digitalWrite(A_IN2, LOW);

    analogWrite(A_PWM, 200);
  }
}
