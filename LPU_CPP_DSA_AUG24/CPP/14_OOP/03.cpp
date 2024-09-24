//Question

/*
Fictional RPG Game Character Creation
You are tasked with creating a Character Creation System for a role-playing game (RPG) using C++. This system allows players to create a character with various attributes such as name, type, health, attack power, defense power, and magical abilities. You must implement the system using object-oriented programming concepts, specifically focusing on classes, objects, constructors, overloading, and encapsulation.

Requirements:
Class Definition:
Create a class Character that represents a game character.
The class should have the following private attributes:
name: a string to hold the character's name.
type: a string representing the character's type (e.g., "Warrior", "Mage", "Archer").
health: an integer representing the health of the character (default value of 100).
attackPower: an integer representing the attack strength of the character.
defensePower: an integer representing the defense strength of the character.
magicPower: an integer representing the magic power (only for certain types like Mage, default 0 for others).

Constructor Overloading:
Implement multiple constructors for the Character class:
A default constructor that initializes the character with default values (e.g., "Unnamed", "Unknown" type, etc.).
A parameterized constructor that allows the player to initialize all attributes by passing values at object creation.
An additional constructor that allows players to create non-magic characters (e.g., Warriors) without specifying magicPower.

Encapsulation (Private Attributes, Getters, and Setters):
Implement getter and setter methods for each private attribute (name, type, health, attackPower, defensePower, magicPower).
Ensure that:
The health value cannot exceed 100.
The magic power can only be set for certain types (e.g., "Mage").
The setter methods should include validation checks (e.g., health must be between 0 and 100).

Behavior Methods:
Add a method attack() that simulates an attack. The method should print the attack power and deduct a value from an enemy's health.
Add a method defend() that simulates a defensive action. It should print the defense power and calculate the health loss reduction when attacked.

Add a method useMagic() for magic-capable characters (like Mages) that prints the magic power and applies special damage.

Main Program:
In the main function:
Create multiple objects using the different constructors.
Demonstrate the use of getter and setter methods.
Perform some actions (e.g., attacking, defending, using magic).
Print out all character details using the getter methods.


*/