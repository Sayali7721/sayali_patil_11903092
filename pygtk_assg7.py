import pygtk
import gtk

class PyApp(gtk.Window):
    def _init_(self):
        super(PyApp, self)._init_()
        self.set_title("College Portal")
        self.set_default_size(600, 800)
        self.set_position(gtk.WIN_POS_CENTER)

        self.label1 = gtk.Label("Name:")
        self.entry1 = gtk.Entry()
        self.label2 = gtk.Label("MIS:")
        self.entry2 = gtk.Entry()
        self.label3 = gtk.Label("Branch:")
        self.entry3 = gtk.Entry()
        self.label4 = gtk.Label("Year:")
        self.entry4 = gtk.Entry()


        self.btn = gtk.Button("SUBMIT")
        self.btn.connect("clicked", self.finish)

        fixed = gtk.Fixed()
        fixed.put(self.label1, 100, 100)
        fixed.put(self.entry1, 100, 125)
        fixed.put(self.label2, 100, 160)
        fixed.put(self.entry2, 100, 185)
        fixed.put(self.label3, 100, 220)
        fixed.put(self.entry3, 100, 245)
        fixed.put(self.label4, 100, 280)
        fixed.put(self.entry4, 100, 305)
        fixed.put(self.btn, 100, 340)

        self.add(fixed)
        self.show_all()

    def finish(self, widget):
        print'Hello, ', self.entry1.get_text(), ' form submitted successfully'
        print'details are :\nName:', self.entry1.get_text(),'\nMis:',self.entry2.get_text(),'\nBranch:',self.entry3.get_text(),'\nYear:',self.entry4.get_text()

PyApp()
gtk.main()
