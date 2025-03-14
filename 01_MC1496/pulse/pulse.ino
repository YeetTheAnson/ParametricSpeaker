//https://note.com/nneco/n/nbdc26579cc05

#define PWM_PIN A1

void setup() {
  // put your setup code here, to run once:
  pinMode(PWM_PIN, OUTPUT);
  pwm(PWM_PIN, 40300, 512);
}

void loop() {
  // put your main code here, to run repeatedly:
}