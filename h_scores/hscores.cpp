#include "hscores.h"
#include <iostream>
using namespace std;
namespace scores
{
	Score::Score()
	{
		for (int i = 0; i < size; i++)
		{
			_scores[i] = 0;
			_names[i] = "n/a";
		}
	}

	Score::~Score(){}

	void Score::addScores(int score, string name)
	{

		for (int i = 0; i < size; i++)
		{

			if (_scores[i] == 0 && _names[i] == "n/a")
			{
				_scores[i] = score;
				_names[i] = name;
			}

		}
	}
	void Score::addScores(int pos, int score, string name)
	{
		_scores[pos] = score;
		_names[pos] = name;
	}
	void Score::sortScoresH()
	{
		int aux;
		string auxS;
		for (int i = 0; i < size; i++)
		{
			if (_scores[i+1]>_scores[i])
			{
				aux = _scores[i];
				auxS = _names[i];
				_scores[i] = _scores[i+1];
				_names[i] = _names[i + 1];
				_scores[i+1] = aux;
				_names[i+1] = auxS;
			}
		}
	}
	void Score::sortScoresL()
	{
		int aux;
		string auxS;
		for (int i = 0; i < size; i++)
		{
			if (_scores[i + 1] < _scores[i])
			{
				aux = _scores[i];
				auxS = _names[i];
				_scores[i] = _scores[i + 1];
				_names[i] = _names[i + 1];
				_scores[i + 1] = aux;
				_names[i + 1] = auxS;
			}
		}
	}
	void Score::resetScores() 
	{
		for (int i = 0; i < size; i++)
		{
			_names[i] = "n/a";
			_scores[i] = 0;
		}
	}
	void Score::deleteScore(int pos)
	{
		_names[pos] = "n/a";
		_scores[pos] = 0;
	}
}
