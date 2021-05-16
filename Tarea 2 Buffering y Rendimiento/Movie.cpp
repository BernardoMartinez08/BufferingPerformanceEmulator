#include "Movie.h"

Movie::Movie(const char* _id, const char* _budget, const char* _homepage, const char* _id_1, const char* _imdb_id, const char* _original_language,
	const char* _original_title, const char* _overview, const char* _popularity, const char* _poster_path, const char* _release_date, const char* _revenue,
	const char* _runtime, const char* _status, const char* _tagline, const char* _title, const char* _video, const char* _vote_average, const char* _vote_count)
{
	set_id(_id);
	set_budget(_budget);
	set_homepage(_homepage);
	set_id_1(_id_1);
	set_imdb_id(_imdb_id);
	set_original_lenguage(_original_language);
	set_original_title(_original_title);
	set_overview(_overview);
	set_popularity(_popularity);
	set_poster_path(_poster_path);
	set_release_date(_release_date);
	set_revenue(_revenue);
	set_runtime(_runtime);
	set_status(_status);
	set_tagline(_tagline);
	set_title(_title);
	set_video(_video);
	set_vote_average(_vote_average);
	set_vote_count(_vote_count);
}

Movie::Movie() {
	id = nullptr;
	budget = nullptr;
	homepage = nullptr;
	id_1 = nullptr;
	imdb_id = nullptr;
	original_language = nullptr;
	original_title = nullptr;
	overview = nullptr;
	popularity = nullptr;
	poster_path = nullptr;
	release_date = nullptr;
	revenue = nullptr;
	runtime = nullptr;
	status = nullptr;
	tagline = nullptr;
	title = nullptr;
	video = nullptr;
	vote_average = nullptr;
	vote_count = nullptr;
}

bool Movie::set_id(const char* _id) {
	if (id != nullptr)
		delete id;

	id = new char[strlen(_id)];
	return strcpy_s(id, strlen(_id) + 1, _id);
}

bool Movie::set_budget(const char* _budget) {
	if (budget != nullptr)
		delete budget;

	budget = new char[strlen(_budget)];
	return strcpy_s(budget, strlen(_budget) + 1, _budget);
}

bool Movie::set_homepage(const char* _homepage) {
	if (homepage != nullptr)
		delete homepage;

	homepage = new char[strlen(_homepage)];
	return strcpy_s(homepage, strlen(_homepage) + 1, _homepage);
}

bool Movie::set_id_1(const char* _id_1) {
	if (id_1 != nullptr)
		delete id_1;

	id_1 = new char[strlen(_id_1)];
	return strcpy_s(id_1, strlen(_id_1) + 1, _id_1);
}

bool Movie::set_imdb_id(const char* _imdb_id) {
	if (imdb_id != nullptr)
		delete imdb_id;

	imdb_id = new char[strlen(_imdb_id)];
	return strcpy_s(imdb_id, strlen(_imdb_id) + 1, _imdb_id);
}

bool Movie::set_original_lenguage(const char* _original_lenguage) {
	if (original_language != nullptr)
		delete original_language;

	original_language = new char[strlen(_original_lenguage)];
	return strcpy_s(original_language, strlen(_original_lenguage) + 1, _original_lenguage);
}

bool Movie::set_original_title(const char* _original_title) {
	if (original_title != nullptr)
		delete original_title;

	original_title = new char[strlen(_original_title)];
	return strcpy_s(original_title, strlen(_original_title) + 1, _original_title);
}

bool Movie::set_overview(const char* _overview) {
	if (overview != nullptr)
		delete overview;

	overview = new char[strlen(_overview)];
	return strcpy_s(overview, strlen(_overview) + 1, _overview);
}

bool Movie::set_popularity(const char* _popularity) {
	if (popularity != nullptr)
		delete popularity;

	popularity = new char[strlen(_popularity)];
	return strcpy_s(popularity, strlen(_popularity) + 1, _popularity);
}

bool Movie::set_poster_path(const char* _poster_path) {
	if (poster_path != nullptr)
		delete poster_path;

	poster_path = new char[strlen(_poster_path)];
	return strcpy_s(poster_path, strlen(_poster_path) + 1, _poster_path);
}

bool Movie::set_release_date(const char* _releace_date) {
	if (release_date != nullptr)
		delete release_date;

	release_date = new char[strlen(_releace_date)];
	return strcpy_s(release_date, strlen(_releace_date) + 1, _releace_date);
}

bool Movie::set_revenue(const char* _revenue) {
	if (revenue != nullptr)
		delete revenue;

	revenue = new char[strlen(_revenue)];
	return strcpy_s(revenue, strlen(_revenue) + 1, _revenue);
}

bool Movie::set_runtime(const char* _runtime) {
	if (runtime != nullptr)
		delete runtime;

	runtime = new char[strlen(_runtime)];
	return strcpy_s(runtime, strlen(_runtime) + 1, _runtime);
}

bool Movie::set_status(const char* _status) {
	if (status != nullptr)
		delete status;

	status = new char[strlen(_status)];
	return strcpy_s(status, strlen(_status) + 1, _status);
}

bool Movie::set_tagline(const char* _tagline) {
	if (tagline != nullptr)
		delete tagline;

	tagline = new char[strlen(_tagline)];
	return strcpy_s(tagline, strlen(_tagline) + 1, _tagline);
}

bool Movie::set_title(const char* _title) {
	if (title != nullptr)
		delete title;

	title = new char[strlen(_title)];
	return strcpy_s(title, strlen(_title) + 1, _title);
}

bool Movie::set_video(const char* _video) {
	if (video != nullptr)
		delete video;

	video = new char[strlen(_video)];
	return strcpy_s(video, strlen(_video) + 1, _video);
}

bool Movie::set_vote_average(const char* _vote_average) {
	if (vote_average != nullptr)
		delete vote_average;

	vote_average = new char[strlen(_vote_average)];
	return strcpy_s(vote_average, strlen(_vote_average) + 1, _vote_average);
}

bool Movie::set_vote_count(const char* _vote_count) {
	if (vote_count != nullptr)
		delete vote_count;

	vote_count = new char[strlen(_vote_count)];
	return strcpy_s(vote_count, strlen(_vote_count) + 1, _vote_count);
}

int Movie::Pack(DelimTextBuffer& _buffer) {
	int resultado;
	resultado = _buffer.Pack(id);
	resultado = resultado && _buffer.Pack(budget);
	resultado = resultado && _buffer.Pack(homepage);
	resultado = resultado && _buffer.Pack(id_1);
	resultado = resultado && _buffer.Pack(imdb_id);
	resultado = resultado && _buffer.Pack(original_language);
	resultado = resultado && _buffer.Pack(original_title);
	resultado = resultado && _buffer.Pack(overview);
	resultado = resultado && _buffer.Pack(popularity);
	resultado = resultado && _buffer.Pack(poster_path);
	resultado = resultado && _buffer.Pack(release_date);
	resultado = resultado && _buffer.Pack(revenue);
	resultado = resultado && _buffer.Pack(runtime);
	resultado = resultado && _buffer.Pack(status);
	resultado = resultado && _buffer.Pack(tagline);
	resultado = resultado && _buffer.Pack(title);
	resultado = resultado && _buffer.Pack(video);
	resultado = resultado && _buffer.Pack(vote_average);
	resultado = resultado && _buffer.Pack(vote_count);

	return resultado;
}

int Movie::Unpack(DelimTextBuffer& _buffer) {
	int resultado;
	resultado = set_id(_buffer.Unpack(id));
	resultado = set_budget(_buffer.Unpack(budget));
	resultado = set_homepage(_buffer.Unpack(homepage));
	resultado = set_id_1(_buffer.Unpack(id_1));
	resultado = set_imdb_id(_buffer.Unpack(imdb_id));
	resultado = set_original_lenguage(_buffer.Unpack(original_language));
	resultado = set_original_title(_buffer.Unpack(original_title));
	resultado = set_overview(_buffer.Unpack(overview));
	resultado = set_popularity(_buffer.Unpack(popularity));
	resultado = set_poster_path(_buffer.Unpack(poster_path));
	resultado = set_release_date(_buffer.Unpack(release_date));
	resultado = set_revenue(_buffer.Unpack(revenue));
	resultado = set_runtime(_buffer.Unpack(runtime));
	resultado = set_status(_buffer.Unpack(status));
	resultado = set_tagline(_buffer.Unpack(tagline));
	resultado = set_title(_buffer.Unpack(title));
	resultado = set_video(_buffer.Unpack(video));
	resultado = set_vote_average(_buffer.Unpack(vote_average));
	resultado = set_vote_count(_buffer.Unpack(vote_count));
	cout << id;
	return resultado;
}

int Movie::Read(DelimTextBuffer& _delim, istream& file) {
	int resultado = 0;

	resultado = _delim.Read(file);
	resultado = resultado && this->Unpack(_delim);

	return resultado;
}

int Movie::Write(DelimTextBuffer& _delim, ostream& destination, int repeticiones) {
	int resultado;
	for (int i = 0; i < repeticiones; i++) {
		resultado = this->Pack(_delim);
		resultado = resultado && _delim.Write(destination);
	}
	return resultado;
}

int Movie::ignore(istream& file) {
	file.ignore(256, '=');
	file.ignore(1, ' ');
	return file.good();
}

int Movie::Write(ostream& fileDestination, int _repets) {
	for (int i = 0; i < _repets; i++) {
		char* cadena;
		/*int tamanio = totalSize();
		cadena = new char[tamanio + sizeof(tamanio)];*/
		cadena = new char[strlen(id)];
		strcpy_s(cadena, strlen(id) + 1, id);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(budget) + 1, budget);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(homepage) + 1, homepage);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(id_1) + 1, id_1);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(imdb_id) + 1, imdb_id);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(original_language) + 1, original_language);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(original_title) + 1, original_title);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(overview) + 1, overview);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(popularity) + 1, popularity);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(poster_path) + 1, poster_path);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(release_date) + 1, release_date);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(revenue) + 1, revenue);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(runtime) + 1, runtime);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(status) + 1, status);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(tagline) + 1, tagline);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(title) + 1, title);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(video) + 1, video);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(vote_average) + 1, vote_average);
		strcat_s(cadena, strlen(cadena) + 2, "^");
		strcat_s(cadena, strlen(cadena) + strlen(vote_count) + 1, vote_count);

		//fileDestination.write((char*)&tamanio, sizeof(tamanio));
		fileDestination.write(cadena, sizeof(cadena));
	}

	return fileDestination.good();
}

int Movie::Read(istream& file) {
	/*const int tamanio = 0;
	file.read((char*)&tamanio, sizeof(tamanio));
	
	char* cadena = new char[tamanio];
	file.read(cadena, tamanio);

	char* aux = strtok(cadena, "^");*/


	return true;
}

int Movie::ReadOriginal(istream& file) {
	this->ignore(file);
	char aux[256];
	file.getline(aux, 256, '\n');
	set_id(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_budget(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_homepage(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_id_1(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_imdb_id(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_original_lenguage(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_original_title(aux);

	this->ignore(file);
	char aux1[10000];
	file.getline(aux1, 10000, '\n');
	set_overview(aux1);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_popularity(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_poster_path(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_release_date(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_revenue(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_runtime(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_status(aux);

	this->ignore(file);
	char aux2[500];
	file.getline(aux2, 500, '\n');
	set_tagline(aux2);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_title(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_video(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_vote_average(aux);

	this->ignore(file);
	file.getline(aux, 256, '\n');
	set_vote_count(aux);

	return file.good();
}

void Movie::print() {
	cout << "\nId: " << id
		<< "\nBudget: " << budget
		<< "\nHome Page: " << homepage
		<< "\nId 1: " << id_1
		<< "\nImdb Id: " << imdb_id
		<< "\nOriginal Language: " << original_language
		<< "\nOriginal Title: " << original_title
		<< "\nOverview: " << overview
		<< "\nPopularity: " << popularity
		<< "\nPoster Path: " << poster_path
		<< "\nRelease Date: " << release_date
		<< "\nRevenue: " << revenue
		<< "\nRuntime: " << runtime
		<< "\nStatus: " << status
		<< "\nTagLine: " << tagline
		<< "\nTitle: " << title
		<< "\nVideo: " << video
		<< "\nVote Average: " << vote_average
		<< "\nVote Count: " << vote_count;
}

int Movie::totalSize() {
	int total = 0;
	total += strlen(id);
	total += strlen(budget);
	total += strlen(homepage);
	total += strlen(id_1);
	total += strlen(imdb_id);
	total += strlen(original_language);
	total += strlen(original_title);
	total += strlen(overview);
	total += strlen(popularity);
	total += strlen(poster_path);
	total += strlen(release_date);
	total += strlen(revenue);
	total += strlen(runtime);
	total += strlen(status);
	total += strlen(tagline);
	total += strlen(title);
	total += strlen(video);
	total += strlen(vote_average);
	total += strlen(vote_count);
	return total;
}

