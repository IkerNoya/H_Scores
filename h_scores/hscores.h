#ifndef HSCORES1_H
#define HSCORES1_H
#include <string>
using namespace std;
namespace scores
{
	const int size = 10;

	class Score
	{
		int _pos = 0; //used for addScores
	public:
		int _scores[size];
		string _names[size];

		Score();
		~Score();
		
		void addScores(int score, string name); // Automatically adds the values into the array
		void addScores(int pos, int score, string name); // Adds the values in a predetermined position in the array
		void sortScoresH(); // Sorts the array from highest to lowest
		void sortScoresL(); // Sorts the array from lowest to highest
		void resetScores(); // Sets all values in the array to 0
		void deleteScore(int pos); // Sets the values of the inserted position to 0

	};
}

#endif // !HSCORES1_H
