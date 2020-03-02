// copied from https://developer.gnome.org/gtkmm-tutorial/stable/sec-helloworld.html.en
// this source code is from GNU FDLv1.2-or-later licensed documentation by Murray Cumming https://developer.gnome.org/gtkmm-tutorial/stable/index-info.html.en
#include "helloworld.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  HelloWorld helloworld;

  //Shows the window and returns when it is closed.
  return app->run(helloworld);
}
