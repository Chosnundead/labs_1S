<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<head>
				<title>Task1</title>
			</head>
			<body style="background-color: black;">
				<xsl:for-each select="main/block">
					<xsl:sort select="text" order="ascending" />
					<p style="color: darkred;">
						<xsl:copy-of select="." />
					</p>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>