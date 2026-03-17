<?xml version="1.0" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:output method="html" indent="yes"/>

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
      <th>Lead characters</th>
      <th>Release year</th>
    </tr>
    <xsl:for-each select="movies/movie">
    <xsl:if test="releaseYear &gt;2000">
      <tr>
        <td>
          <xsl:value-of select="normalize-space(title)" />
        </td>
        <td>
          <xsl:value-of select="normalize-space(director)" />
        </td>
        <td>
          <xsl:for-each select="leadCharacter/name">
            <xsl:value-of select="normalize-space(.)"/>
            <xsl:if test="position() != last()">, </xsl:if>
          </xsl:for-each>
        </td>
        <td>
          <xsl:value-of select="normalize-space(releaseYear)" />
        </td>
      </tr>
      </xsl:if>
    </xsl:for-each>
  </table>
</body>

</html>
</xsl:template>

</xsl:stylesheet>