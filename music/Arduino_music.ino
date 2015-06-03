const int loudspeaker_pin = 13;
const int base_time = 16 * 50; // 16の倍数が都合がいい


void setup() {
  // put your setup code here, to run once:
pinMode( loudspeaker_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
tone(loudspeaker_pin, 330);
delay(base_time * 3 / 2 / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 262);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time * 3 / 2 / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 262);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 262);
delay(base_time / 2);
noTone(loudspeaker_pin);
delay(base_time / 2);

}
