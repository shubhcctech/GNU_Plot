<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Geometric Shapes Library</title>
</head>

<body>

  <h1>Geometric Shapes Library</h1>

  <p>This C++ library provides functionality for working with various geometric shapes, including Circle, Ellipse, Line, Rectangle, Square, and Triangle. Each shape is represented by a class that inherits from the abstract base class Shape.</p>

  <h2>Project Structure</h2>

  <h3>Headers (Folder)</h3>

  <h4>Shape.h</h4>
  <p>The <code>Shape</code> header file guards against multiple inclusion using preprocessor directives. The <code>Shape</code> class is declared with a pure virtual function <code>plot(void *ptr)</code>, making it an abstract class. This function lacks an implementation in the base class, indicating that derived classes must provide their own implementations.</p>

  <h4>Circle.h</h4>
  <p>The <code>Circle</code> class defines a Circle inheriting from the <code>Shape</code> base class. It encapsulates a circle's properties, including the radius (<code>mRadius</code>). The class provides various constructors, a copy assignment operator, and a destructor. Public member functions include methods to calculate the circle's area and circumference, as well as a function <code>plot</code>. However, the actual implementation details of these functions are not provided in the given code snippet.</p>

  <!-- Include similar HTML structure for other sections -->

  <h3>Lib (Folder)</h3>
  <p>The generated library is placed in this <code>lib</code> folder.</p>

  <h3>Output (Folder)</h3>
  <p>This folder contains the final <code>.exe</code> file, which is to be executed to see the final output of the code.</p>

  <h3>Src (Folder)</h3>

  <h4>Circle.cpp</h4>
  <p>The <code>Circle</code> class implementation represents circles and includes functionality for calculating the area and circumference of a circle. It also implements a <code>plot</code> function that generates a GNU Plot script for visualizing the circle and executes it using Gnuplot. The class uses a struct <code>Node</code> to store the radius of the circle, and the implementation ensures proper handling of memory and resource management.</p>

  <!-- Include similar HTML structure for other sections -->

  <h3>Test (Folder)</h3>
  <p>This folder contains the <code>.cpp</code> file which is to be executed for the final output. This file likely includes test cases for the implemented classes.</p>

  <p>Feel free to explore each folder and file for detailed implementations and usage of the geometric shapes library.</p>

</body>

</html>
