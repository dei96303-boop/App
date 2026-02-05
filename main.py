import os
import subprocess
from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.scrollview import ScrollView

class MyCApp(App):
    def build(self):
        # সি-ফাইলটি কম্পাইল করার চেষ্টা
        try:
            os.system("gcc calc.c -o calc -lm")
            output = subprocess.check_output(["./calc"], input="1\n5\nn\n", text=True, stderr=subprocess.STDOUT)
        except Exception as e:
            output = f"Execution Error: {str(e)}"
        
        root = ScrollView()
        label = Label(text=output, size_hint_y=None, font_size='15sp')
        label.bind(texture_size=label.setter('size'))
        root.add_widget(label)
        return root

if __name__ == "__main__":
    MyCApp().run()
  
