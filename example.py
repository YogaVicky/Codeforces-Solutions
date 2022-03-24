from flask import Flask

app = Flask(__name__)

string = "Hello from string"

@app.route("/")
def index():
	# string.appned('a')
    return """
<h1>My First Web Page</h1>
<p>My First Paragraph</p>

<p id="demo"></p>

<script>
document.getElementById("demo").innerHTML = 5 + 6;
</script>
    """


@app.route("/end")
def end():
	# string.appned('a')
    return """
<h1>My Last Web Page</h1>
<p>My First Paragraph</p>

<p id="demo"></p>

<script>
document.getElementById("demo").innerHTML = 5 + 6;
</script>
    """

if __name__ == '__main__':
    app.run('0.0.0.0',debug = True)
