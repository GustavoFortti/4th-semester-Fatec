// copied from https://developer.gnome.org/gtkmm-tutorial/stable/sec-helloworld.html.en
// this source code is from GNU FDLv1.2-or-later licensed documentation by Murray Cumming https://developer.gnome.org/gtkmm-tutorial/stable/index-info.html.en
#ifndef GTKMM_EXAMPLE_HELLOWORLD_H
#define GTKMM_EXAMPLE_HELLOWORLD_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window
{

public:
  HelloWorld();
  virtual ~HelloWorld();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Member widgets:
  Gtk::Button m_button;
};

#endif // GTKMM_EXAMPLE_HELLOWORLD_H