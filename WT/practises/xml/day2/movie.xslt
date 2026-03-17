<?xml version="1.0" ?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
<html>
<head>
  <title>XSLT Movies list</title>
</head>

<body>
  <h1>My Movies list</h1>
  <table>
    <tr>
      <th>Title</th>
      <th>Director</th>
      <th>Genre</th>
      <th>Release year</th>
    </tr>
    <xsl:for-each select="movies/movie">
      <tr>
        <td>
          <xsl:value-of select="title" />
        </td>
        <td>
          <xsl:value-of select="director" />
        </td>
        <td>
          <xsl:value-of select="name" />
        </td>
        <td>
          <xsl:value-of select="releaseYear" />
        </td>
      </tr>
    </xsl:for-each>
  </table>
</body>

</html>
</xsl:template>

</xsl:stylesheet>