import os
class Notification:
    def __init__(self, title ,subtitle,message):
        self.__title=title
        self.__subtitle=subtitle
        self.__message=message
        self._sound="path"

    def notify(self):
        t = '-title {!r}'.format(self.__title)
        s = '-subtitle {!r}'.format(self.__subtitle)
        m = '-message {!r}'.format(self.__message)
        os.system('terminal-notifier {}'.format(' '.join([m, t, s])))

    @property
    def get_title(self):
        return self.__title

    def set_title(self,title):
        self.__title=title
    @property
    def get_subtitle(self):
        return self.__subtitle

    def set_subtitle(self, subtitle):
        self.__subtitle=subtitle
    @property
    def get_message(self):
        return self.message

    def set_message(self,message):
        self.__message=message
        
    def set_sound(self,path):
        return self._sount=path