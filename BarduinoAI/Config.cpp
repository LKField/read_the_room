// config.cpp
#include "Config.h"
#include "arduino_secrets.h"

// WiFi Configuration definitions
const char* WiFiConfig::SSID = SECRET_SSID;
const char* WiFiConfig::PASSWORD = SECRET_PASS;

// OpenAI Configuration definitions
const char* OpenAIConfig::API_KEY = SECRET_API;
const char* OpenAIConfig::MODEL = "gpt-4o-mini";
const int OpenAIConfig::MAX_CALLS = 100;
const int OpenAIConfig::MAX_TOKENS = 2000;
const char* OpenAIConfig::BASE_PROMPT = "You are an automata with a goal and a list of actions that you can execute to achieve that goal. \\n"
                                      "On each iteration you will receive some imput data, you analyze it and return the action that is most probable to make you achieve your goal. \\n"
                                      "Return the action in plain text, without any additional symbols or explanation. \\n";

//const char* OpenAIConfig::GOAL = "Goal: read the temperature and light level of the room to determine the mood. Brighter (maximum value 4095) and warmer (maximum value 30) is happier, while darker (minimum value 100) and colder (minimum value is 27) is sadder. Then output a melody that matches that mood using the melody functions. \\n";
//const char* OpenAIConfig::GOAL = "Goal: repeatedly read the light level of the room to determine the mood. Brighter is happier, while darker is sadder. \\n"
//                                "The light range is from 100 to 4095, which must include four different mood options. \\n"
//                                "Then choose a melody that matches that mood using the melody function descriptions and play just that melody function for five seconds. \\n"
//                                "Then check the light sensor again and play another melody based on the new light reading. \\n";
const char* OpenAIConfig::GOAL = "Goal: Begin by reading the current light level from the light sensor. \\n"
                                  "The brightest light is a value of 4095, the middle light is a value of 2095, and the darkest light is a value of 0. \\n"
                                  "A higher light value is happier, a middle light value is neutral, while a lower light value is sadder. \\n"
                                  "Do not play more than one melody, select only the single corresponding melody.\\n"
                                  "Then play only the one melody that corresponds to the current mood of the room that you determined from reading the light sensor value.\\n";



// Hardware Configuration definitions
const int PinConfig::ONBOARD_LED = 48;
const int PinConfig::PHOTO_TRANSISTOR = 3;
const int PinConfig::BUZZER = 46;           // Changed to buzzer pin 46 not 43
const int PinConfig::TEMP_SENSOR_SDA = 8;
const int PinConfig::TEMP_SENSOR_SCL = 9;
const int PinConfig::NEOPIXEL = 38;