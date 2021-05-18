#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include <vector>
#include "DelimTextBuffer.h"
#include <fstream>

using namespace std;

class Movie{
public:
	//id, budget, homepage, id.1,imdb_id, original_language, original_title, overview, popularity, poster_path, release_date, revenue, runtime, status, tagline, title, video, vote_average, vote_count
	Movie(const char*, const char*,const char*, const char*,const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*);
	Movie();

	bool set_id(const char*);
	bool set_budget(const char*);
	bool set_homepage(const char*);
	bool set_id_1(const char*);
	bool set_imdb_id(const char*);
	bool set_original_lenguage(const char*);
	bool set_original_title(const char*);
	bool set_overview(const char*);
	bool set_popularity(const char*);
	bool set_poster_path(const char*);
	bool set_release_date(const char*);
	bool set_revenue(const char*);
	bool set_runtime(const char*);
	bool set_status(const char*);
	bool set_tagline(const char*);
	bool set_title(const char*);
	bool set_video(const char*);
	bool set_vote_average(const char*);
	bool set_vote_count(const char*);

	int Write(DelimTextBuffer&, ostream& fileDestination, int _repets = 1);
	int Read(DelimTextBuffer&, istream& file);
	int Pack(DelimTextBuffer&);
	int Unpack(DelimTextBuffer&);

	int Write(ostream& fileDestination, int _repets = 1);
	int Read(istream& file);
	int ReadOriginal(istream& file);
	int ignore(istream& file);

	void print();

private:
	char* id;
	char* budget;
	char* homepage;
	char* id_1;
	char* imdb_id; 
	char* original_language;
	char* original_title;
	char* overview;
	char* popularity;
	char* poster_path;
	char* release_date;
	char* revenue;
	char* runtime;
	char* status;
	char* tagline;
	char* title;
	char* video;
	char* vote_average;
	char* vote_count;

};
#endif // !MOVIE_H
