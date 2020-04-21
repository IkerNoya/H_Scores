#ifndef HSCORES_H
#define HSCORES_H
#include <string>
using namespace std;
namespace scores
{
	const int size = 10;

	class Score
	{
		int _scores[size];
		string _names[size];
	public:
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

#endif // !HSCORES_H
