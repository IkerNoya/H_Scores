#include <iostream>
#include "hscores.h"
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
		if (_scores[_pos] == 0 && _names[_pos] == "n/a")
		{
			_scores[_pos] = score;
			_names[_pos] = name;
		}
		else
		{
		    _pos++;
			_scores[_pos] = score;
			_names[_pos] = name;
		}
		_pos++;
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
			
			for (int j = 0; j < size; j++)
			{
				if (_scores[i] > _scores[j])
				{
					aux = _scores[j];
					auxS = _names[j];
					_scores[j] = _scores[i];
					_names[j] = _names[i];
					_scores[i] = aux;
					_names[i] = auxS;
				}

			}
		}
	}

	void Score::sortScoresL()
	{
		int aux;
		string auxS;
		for (int i = 0; i < size; i++)
		{

			for (int j = 0; j < size; j++)
			{
				if (_scores[i] < _scores[j])
				{
					aux = _scores[j];
					auxS = _names[j];
					_scores[j] = _scores[i];
					_names[j] = _names[i];
					_scores[i] = aux;
					_names[i] = auxS;
				}

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
