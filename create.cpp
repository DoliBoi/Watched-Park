//----------------------------------------------------------------------------------------
/**
 * \file    create.cpp
 * \author  Martin Doležal
 * \date    2022
 * \brief   creates objects for main
 */
 //----------------------------------------------------------------------------------------

#ifndef __CREATE_H
#define __CREATE_H

#include <time.h>
#include <list>
#include "pgr.h"
#include "render_stuff.h"
#include "spline.h"
#include "create.h"
#include <iostream>
#include <fstream>

BannerObject* createBanner(float speed, float size, float elapsedTime) {
	BannerObject* newBanner = new BannerObject;

	newBanner->size = size;
	newBanner->position = glm::vec3(0.0f, -1.0f, 0.0f);
	newBanner->direction = glm::vec3(0.0f, 1.0f, 0.0f);
	newBanner->speed = speed;

	newBanner->destroyed = false;

	newBanner->startTime = elapsedTime;
	newBanner->currentTime = newBanner->startTime;

	return newBanner;
}

Object* createIsland(const glm::vec3& pos, float elapsedTime) {
	Object* island = new Object;

	island->destroyed = false;

	island->startTime = elapsedTime;
	island->currentTime = island->startTime;

	island->size = 5.0f;

	island->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	island->direction = glm::normalize(island->direction);

	island->position = pos;

	return island;
}

Object* createWater(const glm::vec3& pos, float elapsedTime) {
	Object* water = new Object;

	water->destroyed = false;

	water->startTime = elapsedTime;
	water->currentTime = water->startTime;

	water->size = 1.0f;

	water->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	water->direction = glm::normalize(water->direction);

	water->position = pos;

	return water;
}

Object* createDog(const glm::vec3& pos, float elapsedTime, float size) {
	Object* dog = new Object;

	dog->destroyed = false;

	dog->startTime = elapsedTime;
	dog->currentTime = dog->startTime;

	dog->size = size;

	dog->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	dog->direction = glm::normalize(dog->direction);

	dog->position = pos;

	return dog;
}

Object* createFence(const glm::vec3& pos, float elapsedTime) {
	Object* fence = new Object;

	fence->destroyed = false;

	fence->startTime = elapsedTime;
	fence->currentTime = fence->startTime;

	fence->size = 0.3f;

	fence->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	fence->direction = glm::normalize(fence->direction);

	fence->position = pos;

	return fence;
}

Object* createDuck(const glm::vec3& pos, float elapsedTime, float size) {
	Object* duck = new Object;

	duck->destroyed = false;

	duck->startTime = elapsedTime;
	duck->currentTime = duck->startTime;

	duck->size = size;

	duck->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	duck->direction = glm::normalize(duck->direction);

	duck->position = pos;

	return duck;
}

Object* createDuck2(const glm::vec3& pos, float elapsedTime, float size) {
	Object* duck2 = new Object;

	duck2->destroyed = false;

	duck2->startTime = elapsedTime;
	duck2->currentTime = duck2->startTime;

	duck2->size = size;

	duck2->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	duck2->direction = glm::normalize(duck2->direction);

	duck2->position = pos;

	return duck2;
}



Object* createBench(const glm::vec3& pos, float elapsedTime, float size) {
	Object* bench = new Object;

	bench->destroyed = false;

	bench->startTime = elapsedTime;
	bench->currentTime = bench->startTime;

	bench->size = size;

	bench->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	bench->direction = glm::normalize(bench->direction);

	bench->position = pos;

	return bench;
}

Object* createTrashbin(const glm::vec3& pos, float elapsedTime, float size) {
	Object* trashbin = new Object;

	trashbin->destroyed = false;

	trashbin->startTime = elapsedTime;
	trashbin->currentTime = trashbin->startTime;

	trashbin->size = size;

	trashbin->direction = glm::vec3(0.5f, 0.0f, 0.0f);
	trashbin->direction = glm::normalize(trashbin->direction);

	trashbin->position = pos;

	return trashbin;
}

RubberDuckObject* createRubberDuck(float elapsedTime, float size, float speed) {
	RubberDuckObject* rubberDuck = new RubberDuckObject;

	rubberDuck->destroyed = false;

	rubberDuck->position = glm::vec3(1.0f, 0.0f, 1.0f);
	rubberDuck->initPosition = glm::vec3(0.0f, 1.0f, 0.0f);
	rubberDuck->viewAngle = 0.0f;
	rubberDuck->direction = glm::vec3(cos(glm::radians(rubberDuck->viewAngle)), sin(glm::radians(rubberDuck->viewAngle)), 0.0f);
	rubberDuck->speed = speed;
	rubberDuck->size = size;
	rubberDuck->startTime = elapsedTime;
	rubberDuck->currentTime = rubberDuck->startTime;
	rubberDuck->explode = false;

	return rubberDuck;
}

DroneObject* createDrone(float elapsedTime, float size, float speed, glm::vec3 initPosition) {
	DroneObject* drone = new DroneObject;

	drone->position = glm::vec3(1.0f, 0.0f, 1.0f);
	drone->initPosition = initPosition;
	drone->viewAngle = 0.0f;
	drone->direction = glm::vec3(cos(glm::radians(drone->viewAngle)), sin(glm::radians(drone->viewAngle)), 0.0f);
	drone->speed = speed;
	drone->size = size;
	drone->startTime = elapsedTime;
	drone->currentTime = drone->startTime;

	return drone;
}

DroneObject* createDrone2(float elapsedTime, float size, float speed, glm::vec3 initPosition) {
	DroneObject* drone = new DroneObject;

	drone->position = glm::vec3(1.0f, 0.0f, 1.0f);
	drone->initPosition = initPosition;
	drone->viewAngle = 0.0f;
	drone->direction = glm::vec3(cos(glm::radians(drone->viewAngle)), sin(glm::radians(drone->viewAngle)), 0.0f);
	drone->speed = speed;
	drone->size = size;
	drone->startTime = elapsedTime;
	drone->currentTime = drone->startTime;

	return drone;
}

Object* createTree(const glm::vec3& pos, float elapsedTime, float size) {
	Object* tree = new Object;
	tree->destroyed = false;
	tree->startTime = elapsedTime;
	tree->currentTime = tree->startTime;
	tree->size = size;
	tree->direction = glm::vec3(0.0f, 0.0f, 0.0f);
	tree->direction = glm::normalize(tree->direction);
	tree->position = glm::vec3(pos);
	return tree;
}

Object* createMan(const glm::vec3& pos, float elapsedTime) {
	Object* man = new Object;
	man->destroyed = false;
	man->startTime = elapsedTime;
	man->currentTime = man->startTime;
	man->size = 0.01f;
	man->direction = glm::vec3(0.0f, 0.0f, 1.0f);
	man->direction = glm::normalize(man->direction);
	man->position = pos;
	return man;
}

Fire* insertFire(const glm::vec3& position, float elapsedTime) {
	Fire* fire = new Fire;
	fire->speed = 0.0f;
	fire->startTime = elapsedTime;
	fire->currentTime = fire->startTime;
	fire->size = 0.1f;
	fire->direction = glm::vec3(0.0f, 0.0f, 1.0f);
	fire->frameDuration = 0.1f;
	fire->textureFrames = 16;
	fire->position = position;
	return fire;
}


#endif // __CREATE_H