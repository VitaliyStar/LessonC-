#include <iostream>
#include<string>
#include <vector>
using namespace std;

enum AnimalEnum { Dog, Cat, Seabass, Parrot, Iguana };

struct Animal
{
	string AnimalsTipe;
	string AnimalsClass;
	string AnimalsName;
	string voice;
};


Animal* FieldCharacteristics(const int AnimalsCount)
{

	Animal* Characteristics = new Animal[AnimalsCount];

	Characteristics[AnimalEnum::Dog].AnimalsName = "Guchka";
	Characteristics[AnimalEnum::Dog].AnimalsTipe = "Dog";
	Characteristics[AnimalEnum::Dog].AnimalsClass = "Mammals";
	Characteristics[AnimalEnum::Dog].voice = "Gav-Gav";

	Characteristics[AnimalEnum::Cat].AnimalsName = "Murka";
	Characteristics[AnimalEnum::Cat].AnimalsTipe = "Cat";
	Characteristics[AnimalEnum::Cat].AnimalsClass = "Mammals";
	Characteristics[AnimalEnum::Cat].voice = "Mau-Mau";

	Characteristics[AnimalEnum::Seabass].AnimalsName = "Wild";
	Characteristics[AnimalEnum::Seabass].AnimalsTipe = "Seabass";
	Characteristics[AnimalEnum::Seabass].AnimalsClass = "Fish";
	Characteristics[AnimalEnum::Seabass].voice = "";

	Characteristics[AnimalEnum::Parrot].AnimalsName = "Gosha";
	Characteristics[AnimalEnum::Parrot].AnimalsTipe = "Parrot";
	Characteristics[AnimalEnum::Parrot].AnimalsClass = "Birds";
	Characteristics[AnimalEnum::Parrot].voice = "Gosha molodec";

	Characteristics[AnimalEnum::Iguana].AnimalsName = "Lapushok";
	Characteristics[AnimalEnum::Iguana].AnimalsTipe = "Iguana";
	Characteristics[AnimalEnum::Iguana].AnimalsClass = "Reptiles";
	Characteristics[AnimalEnum::Iguana].voice = "Ssssssssssss";

	return Characteristics;
}

Animal* SearchCharacter(Animal* const AnimalArr, int AnimalCount, Animal& a)
{
	for (int i = 0; i < AnimalCount; ++i)
	{
		if (AnimalArr[i].AnimalsName == a.AnimalsName)
		{
			return &AnimalArr[i];
		}
	}
	return nullptr;
}

void Voice(Animal& a)
{
	if (a.voice == "")
	{
		cout << "Its a fish..." << endl;
	}
	else
	{
		cout << a.voice << endl;
	}
}

void PrintAnimalChars(Animal& a)
{
	cout << "Your animal's characteristics : " << endl;
	cout << "Class - " << a.AnimalsClass << endl;
	cout << "Tipe - " << a.AnimalsTipe << endl;
	Voice(a);
}

void main()
{
	const int AnimalsCount = 5;
	Animal* Characteristics = FieldCharacteristics(AnimalsCount);

	Animal Character;
	cout << "Choos and enter name of animal\nGuchka\nMurka\nWild\nGosha\nLapushok:";
	cout << endl;
	cin >> Character.AnimalsName;
	cout << endl;

	//	FieldCharacteristics(Character);

	auto res = SearchCharacter(Characteristics, AnimalsCount, Character);

	if (res != nullptr)
	{
		PrintAnimalChars(*res);
	}
	else
	{
		cout << "we don't know such animal" << endl;
	}

	system("pause");
}
