// #include <SPI.h>
// #include <MFRC522.h>

// #define SS_PIN 10  // Define the slave select pin
// #define RST_PIN 9  // Define the reset pin

// MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance

// void setup() {
//   Serial.begin(9600);  // Initialize serial communication
//   SPI.begin();  // Initialize SPI bus
//   mfrc522.PCD_Init();  // Initialize MFRC522
//   Serial.println("RFID Access Control System");
// }

// void loop() {
//   // Look for new cards
//   if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
//     Serial.println("A new card has been detected.");

//     // Get the UID of the card
//     String uid = getUID();

//     // Print the UID to the serial monitor
//     Serial.print("UID: ");
//     Serial.println(uid);

//     // Check if the UID matches any of the allowed card values
//     if (uid == "83b54a96" || uid == "0310fca5") {
//       Serial.println("Access Granted");
//     } else {
//       Serial.println("Access Denied");
//     }

//     // Halt and stop reading for a while
//     mfrc522.PICC_HaltA();
//     mfrc522.PCD_StopCrypto1();
//   }
// }

// String getUID() {
//   String uid = "";

//   for (byte i = 0; i < mfrc522.uid.size; i++) {
//     uid += String(mfrc522.uid.uidByte[i] < 0x10 ? "0" : "");
//     uid += String(mfrc522.uid.uidByte[i], HEX);
//   }

//   Serial.print("The NUID tag is: ");
//   Serial.println(uid);

//   return uid;
// }


#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

#define SS_PIN 10  // Define the slave select pin
#define RST_PIN 9   // Define the reset pin
#define SERVO_PIN 6 // Define the pin connected to the servo

MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance
Servo servo;                       // Create Servo instance

void setup()
{
  Serial.begin(9600); // Initialize serial communication
  SPI.begin();        // Initialize SPI bus
  mfrc522.PCD_Init(); // Initialize MFRC522
  servo.attach(SERVO_PIN); // Attach the servo to the specified pin
  Serial.println("RFID Access Control System");
}

void loop()
{
  // Look for new cards
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial())
  {
    Serial.println("A new card has been detected.");

    // Get the UID of the card
    String uid = getUID();

    // Print the UID to the serial monitor
    Serial.print("UID: ");
    Serial.println(uid);

    // Check if the UID matches any of the allowed card values
    if (uid == "431c12a8" || uid == "438828a6")
    {
      Serial.println("Access Granted");
      openDoor(); // Open the door using the servo
      delay(5000); // Keep the door open for 5 seconds (adjust as needed)
      closeDoor(); // Close the door using the servo
    }
    else
    {
      Serial.println("Access Denied");
    }

    // Halt and stop reading for a while
    mfrc522.PICC_HaltA();
    mfrc522.PCD_StopCrypto1();
  }
}

String getUID()
{
  String uid = "";

  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    uid += String(mfrc522.uid.uidByte[i] < 0x10 ? "0" : "");
    uid += String(mfrc522.uid.uidByte[i], HEX);
  }

  Serial.print("The NUID tag is: ");
  Serial.println(uid);

  return uid;
}

void openDoor()
{
  servo.write(90); // Move the servo to the open position (adjust the angle as needed)
}

void closeDoor()
{
  servo.write(0); // Move the servo to the close position (adjust the angle as needed)
}
