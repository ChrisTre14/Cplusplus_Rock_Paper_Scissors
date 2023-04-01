#ifndef SCORERENDERER_H
#define SCORERENDERER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <memory>

#include "Player.h"
#include "Renderer.h"

class ScoreRenderer : public Renderer
{
private:

std::shared_ptr<Player> player1;
std::shared_ptr<Player> player2;
public:

    ScoreRenderer(std::shared_ptr<Player> &player1, std::shared_ptr<Player> &player2);
    ScoreRenderer(ScoreRenderer const &scoreRenderer)=default;
    ScoreRenderer(ScoreRenderer &&scoreRenderer)=default;

    ScoreRenderer &operator=(ScoreRenderer const &scoreRenderer)=default;
    ScoreRenderer &operator=(ScoreRenderer &&scoreRenderer)=default;

    ~ScoreRenderer()=default;
    
    virtual void render() const override;
};

#endif
