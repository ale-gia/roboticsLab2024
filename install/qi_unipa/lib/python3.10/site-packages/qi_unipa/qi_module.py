import qi
class Qi_Module(qi.Session().service("AlModule")):
    def callback(self, key, value, message):
        print(value)
        pass
    