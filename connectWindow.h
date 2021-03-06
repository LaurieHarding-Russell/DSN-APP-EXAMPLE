#ifndef connectWindow_h
#define connectWindow_h

#include <gtkmm.h>
#include <gtkmm/window.h>
#include <thread>
#include "DSNApiLibrary/chat.h"
#include "DSNApiLibrary/chatServer.h"
#include <string>

#include <iostream>	// For testing purposes only.

class ConnectWindow : public Gtk::Window{
public:
	ConnectWindow();
	ConnectWindow(Chat* c);
	virtual ~ConnectWindow();
protected:
	//Signal Handlers
	void connect();
	void sendMessage();
	bool update();
	// Layout
	Gtk::Notebook frame; // Switch pages
	Gtk::Box connectFrame;
	Gtk::Box talkFrame;
	Gtk::Box userPFrame;
	// ********* connect ************
	Gtk::Label ipAddressL;
	Gtk::Entry ipAddressE;
	Gtk::Label nameL;
	Gtk::Entry nameE;
	Gtk::Button connectB;
	// ********* message **********
	Gtk::ScrolledWindow messageScroll;
	Gtk::TextView conversation;
	Gtk::Entry messageE;
	Gtk::Button sendB;
	// ******* User Page ************
	std::string userPhotoName;
	Gtk::Label userName;	//
	Gtk::Image userPhoto; //
	Gtk::ScrolledWindow feedScroll;
	Gtk::Box feedFrame;
	Gtk::Label otherStuff; //

 private:
	Chat* client;
	std::thread clientThread;
	std::string name;
	std::string ip;
	bool loggedOn;
};
#endif
