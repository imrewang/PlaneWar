#pragma once

#include <QtWidgets/QWidget>
#include "ui_MainScene.h"
#include "Map.h"
#include "HeroPlane.h"
#include "enemyPlane.h"
#include"bomb.h"
#include <QIcon>
#include <QTimer>
#include <QPainter>
#include <QMouseEvent>
#include <ctime>
#include <QSound>


class MainScene : public QWidget
{
    Q_OBJECT

public:
    //地图对象
    Map m_map;

    //创建飞机对象
    HeroPlane m_hero;

    //定时器对象
    QTimer m_Timer;


    //敌机数组
    EnemyPlane m_enemys[ENEMY_NUM];

    //敌机出场间隔记录
    int m_recorder;

    //爆炸数组
    Bomb m_bombs[BOMB_NUM];

    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    //初始化场景
    void initScene();

    //启动游戏  用于启动定时器对象
    void playGame();
    //更新坐标
    void updatePosition();
    //绘图事件
    void paintEvent(QPaintEvent* event);

    //重写鼠标移动事件
    void mouseMoveEvent(QMouseEvent* event);

    //敌机出场
    void enemyToScene();

    //碰撞检测
    void collisionDetection();

    //死亡检测
    void DeathDetection();

private:
    Ui::MainSceneClass ui;
};
