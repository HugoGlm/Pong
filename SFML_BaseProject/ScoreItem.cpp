#include "ScoreItem.h"

ScoreItem::ScoreItem(Player* _player, Score* _score, const int& _scoreMax)
{
    player = _player;
    score = _score;
    scoreMax = _scoreMax;

}

ScoreItem::~ScoreItem()
{
    delete player;
    player = nullptr;
    delete score;
    score = nullptr;
}

bool ScoreItem::IsScoreMax()
{
    return (score->GetCurrentScore() == scoreMax);
}

int ScoreItem::GetScore()
{
    return score->GetCurrentScore();
}

void ScoreItem::GameWin()
{
    // TODO mettre le jeu sur pause dans le viewport via un accesseur d'un booleen de cette classe (bool isPaused)

    // TODO récupérer le nom du joueur et afficher qu'il a gagné la partie dans un texte

}

void ScoreItem::Draw(RenderWindow& _window)
{
    player->Draw(_window);
    score->Draw(_window);
}
