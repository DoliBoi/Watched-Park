//----------------------------------------------------------------------------------------
/**
 * \file    create.h
 * \author  Martin Doležal
 * \date    2022
 * \brief   creates objects for main
 */
 //----------------------------------------------------------------------------------------

#ifndef __CREATE_H
#define __CREATE_H

BannerObject* createBanner(float speed, float size, float elapsedTime);
Object* createIsland(const glm::vec3& pos, float elapsedTime);
Object* createWater(const glm::vec3& pos, float elapsedTime);
Object* createDog(const glm::vec3& pos, float elapsedTime, float size);
Object* createFence(const glm::vec3& pos, float elapsedTime);
Object* createDuck(const glm::vec3& pos, float elapsedTime, float size);
Object* createDuck2(const glm::vec3& pos, float elapsedTime, float size);
Object* createBench(const glm::vec3& pos, float elapsedTime, float size);
Object* createTrashbin(const glm::vec3& pos, float elapsedTime, float size);
RubberDuckObject* createRubberDuck(float elapsedTime, float size, float speed);
DroneObject* createDrone(float elapsedTime, float size, float speed, glm::vec3 initPosition);
DroneObject* createDrone2(float elapsedTime, float size, float speed, glm::vec3 initPosition);
Object* createTree(const glm::vec3& pos, float elapsedTime, float size);
Object* createMan(const glm::vec3& pos, float elapsedTime);
Fire* insertFire(const glm::vec3& position, float elapsedTime);


#endif // __CREATE_H