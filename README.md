# PlaneWar

飞机大战

## 一、简介

玩家控制一架小飞机，然后自动发射子弹，如果子弹打到了飞下来的敌机，则射杀敌机，并且有爆炸的特效

## 二、部署

### （一）环境

使用：C++、Qt5

环境：windows

### （二）部署截图

![部署截图](https://github.com/imrewang/PlaneWar/blob/master/screenshot/%E9%83%A8%E7%BD%B2%E6%88%AA%E5%9B%BE.png?raw=true)

## 三、运行截图

![运行截图](https://github.com/imrewang/PlaneWar/blob/master/screenshot/%E8%BF%90%E8%A1%8C%E6%88%AA%E5%9B%BE.png?raw=true)

## 四、总结

### （一）Qt安装运行问题

成功安装Qt，并成功运行项目

### （二）Qt机制问题

对Qt运行机制有了初步模糊了解

### （三）多对多物体判断问题

在mainscene中对子弹和敌机进行循环判断

### （四）物体相交问题

Qt中有QRect，每次更新坐标可以

~~~
//初始化矩形框
m_Rect.setWidth(m_Plane.width());
m_Rect.setHeight(m_Plane.height());
m_Rect.moveTo(m_X, m_Y);
~~~

然后由

~~~
m_enemys[i].m_Rect.intersects(m_hero.m_bullets[j].m_Rect)
~~~

判断是否相交

### 五、改进方向

1.增加关卡

2.记录分数

3.获得不同的道具

就是可以和![DodgeBullet](https://github.com/imrewang/DodgeBullets)结合
