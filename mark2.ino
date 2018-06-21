#DEFINE PIN 5

int pin_motorL1 = 3;
int pin_motorL2 = 4;
int pin_motorLE = 9;
int pin_motorR1 = 5; 
int pin_motorR2 = 6;
int pin_motorRE = 10;

int pin_sensorR1 = A0;
int pin_sensorR2 = A1;
int pin_sensorL1 = A2;
int pin_sensorL2 = A3;

int pin_ = A4;
int pin_sensorR1 = A5;


void setup() {

    
    Serial.begin(9600); 
}

void loop() {
    Serial.println("hallo");
    delay(1000);
}
