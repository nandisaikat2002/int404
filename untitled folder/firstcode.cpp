#include <iostream> #include <vector> #include <string> #include <ctime> #include <cstdlib>
using namespace std;
// Structure for animal information
struct Animal {
string id;
string type;
double weight;
double temperature;
bool isHealthy;
};
// Function to generate a random double number between min and max values
double randomDouble(double min, double max) {
return (double) rand() / RAND_MAX * (max - min) + min;
}
// Function to generate a random boolean value
bool randomBool() {
return rand() % 2 == 0; }
// Function to generate a random animal
Animal generateAnimal(string type) {
Animal animal;
animal.id = "ID" + to_string(rand() % 1000); // Generate a random ID
animal.type = type;
animal.weight = randomDouble(50, 200); // Generate a random weight
animal.temperature = randomDouble(36.5, 39.5); // Generate a random temperature
animal.isHealthy = randomBool(); // Generate a random health status
return animal; }
// Function to print an animal
void printAnimal(Animal animal) {
cout << "ID: " << animal.id << endl;
cout << "Type: " << animal.type << endl;
cout << "Weight: " << animal.weight << endl;
cout << "Temperature: " << animal.temperature << endl;
cout << "Healthy: " << (animal.isHealthy ? "Yes" : "No") << endl;
cout << endl; }
// Main function
int main() {
// Initialize the random seed
srand(time(NULL));
// Generate 10 random animals
vector<Animal> animals;
for (int i = 0; i < 10; i++) {
animals.push_back(generateAnimal("Cow"));
}
// Print the generated animals
for (Animal animal : animals) {
printAnimal(animal);
}
return 0; }