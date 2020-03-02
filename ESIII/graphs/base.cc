// copied from https://developer.gnome.org/gtkmm-tutorial/stable/sec-helloworld.html.en
// this source code is from GNU FDLv1.2-or-later licensed documentation by Murray Cumming https://developer.gnome.org/gtkmm-tutorial/stable/index-info.html.en
#include <gtkmm.h>
int main(int argc, char *argv[]){
auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");
Gtk::Window window;
window.set_default_size(200, 200);
return app->run(window);
}